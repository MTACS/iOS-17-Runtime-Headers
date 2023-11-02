
@interface MXSessionMetadata : PBCodable <NSCopying> {
    bool  _dataSharingOptInStatus;
    MXDeviceInfo * _deviceInfo;
    struct { 
        unsigned int userInterfaceIdiom : 1; 
        unsigned int dataSharingOptInStatus : 1; 
    }  _has;
    NSString * _language;
    int  _userInterfaceIdiom;
}

@property (nonatomic) bool dataSharingOptInStatus;
@property (nonatomic, retain) MXDeviceInfo *deviceInfo;
@property (nonatomic) bool hasDataSharingOptInStatus;
@property (nonatomic, readonly) bool hasDeviceInfo;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasUserInterfaceIdiom;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) int userInterfaceIdiom;

- (void).cxx_destruct;
- (int)StringAsUserInterfaceIdiom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dataSharingOptInStatus;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (bool)hasDataSharingOptInStatus;
- (bool)hasDeviceInfo;
- (bool)hasLanguage;
- (bool)hasUserInterfaceIdiom;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDataSharingOptInStatus:(bool)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setHasDataSharingOptInStatus:(bool)arg1;
- (void)setHasUserInterfaceIdiom:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setUserInterfaceIdiom:(int)arg1;
- (int)userInterfaceIdiom;
- (id)userInterfaceIdiomAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
