
@interface EDPBInteractionEventHeader : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {
    bool  _categoryRootInstalled;
    long long  _deviceId;
    struct { 
        unsigned int deviceId : 1; 
        unsigned int userId : 1; 
        unsigned int timezoneOffset : 1; 
        unsigned int userSegment : 1; 
        unsigned int version : 1; 
        unsigned int categoryRootInstalled : 1; 
    }  _has;
    NSString * _locale;
    int  _timezoneOffset;
    long long  _userId;
    unsigned int  _userSegment;
    unsigned int  _version;
}

@property (nonatomic) bool categoryRootInstalled;
@property (nonatomic) long long deviceId;
@property (nonatomic) bool hasCategoryRootInstalled;
@property (nonatomic) bool hasDeviceId;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic) bool hasTimezoneOffset;
@property (nonatomic) bool hasUserId;
@property (nonatomic) bool hasUserSegment;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) int timezoneOffset;
@property (nonatomic) long long userId;
@property (nonatomic) unsigned int userSegment;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (bool)categoryRootInstalled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceId;
- (id)dictionaryRepresentation;
- (bool)hasCategoryRootInstalled;
- (bool)hasDeviceId;
- (bool)hasLocale;
- (bool)hasTimezoneOffset;
- (bool)hasUserId;
- (bool)hasUserSegment;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (int)messageFrameType;
- (bool)readFrom:(id)arg1;
- (void)setCategoryRootInstalled:(bool)arg1;
- (void)setDeviceId:(long long)arg1;
- (void)setHasCategoryRootInstalled:(bool)arg1;
- (void)setHasDeviceId:(bool)arg1;
- (void)setHasTimezoneOffset:(bool)arg1;
- (void)setHasUserId:(bool)arg1;
- (void)setHasUserSegment:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setTimezoneOffset:(int)arg1;
- (void)setUserId:(long long)arg1;
- (void)setUserSegment:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (int)timezoneOffset;
- (long long)userId;
- (unsigned int)userSegment;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
