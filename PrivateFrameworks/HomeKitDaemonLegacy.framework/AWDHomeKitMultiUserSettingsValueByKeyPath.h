
@interface AWDHomeKitMultiUserSettingsValueByKeyPath : PBCodable <NSCopying> {
    struct { 
        unsigned int homeKitMultiUserSettingsValueInteger : 1; 
        unsigned int type : 1; 
    }  _has;
    NSData * _homeKitMultiUserSettingsValueData;
    long long  _homeKitMultiUserSettingsValueInteger;
    NSString * _homeKitMultiUserSettingsValueString;
    int  _type;
}

@property (nonatomic, readonly) bool hasHomeKitMultiUserSettingsValueData;
@property (nonatomic) bool hasHomeKitMultiUserSettingsValueInteger;
@property (nonatomic, readonly) bool hasHomeKitMultiUserSettingsValueString;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSData *homeKitMultiUserSettingsValueData;
@property (nonatomic) long long homeKitMultiUserSettingsValueInteger;
@property (nonatomic, retain) NSString *homeKitMultiUserSettingsValueString;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHomeKitMultiUserSettingsValueData;
- (bool)hasHomeKitMultiUserSettingsValueInteger;
- (bool)hasHomeKitMultiUserSettingsValueString;
- (bool)hasType;
- (unsigned long long)hash;
- (id)homeKitMultiUserSettingsValueData;
- (long long)homeKitMultiUserSettingsValueInteger;
- (id)homeKitMultiUserSettingsValueString;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHomeKitMultiUserSettingsValueInteger:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHomeKitMultiUserSettingsValueData:(id)arg1;
- (void)setHomeKitMultiUserSettingsValueInteger:(long long)arg1;
- (void)setHomeKitMultiUserSettingsValueString:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
