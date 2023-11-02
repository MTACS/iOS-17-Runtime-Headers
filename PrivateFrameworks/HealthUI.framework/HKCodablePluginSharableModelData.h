
@interface HKCodablePluginSharableModelData : PBCodable <NSCopying> {
    NSString * _sourceLocaleIdentifier;
    NSString * _sourceTimeZoneIdentifier;
    NSData * _userData;
}

@property (nonatomic, readonly) bool hasSourceLocaleIdentifier;
@property (nonatomic, readonly) bool hasSourceTimeZoneIdentifier;
@property (nonatomic, readonly) bool hasUserData;
@property (nonatomic, retain) NSString *sourceLocaleIdentifier;
@property (nonatomic, retain) NSString *sourceTimeZoneIdentifier;
@property (nonatomic, retain) NSData *userData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSourceLocaleIdentifier;
- (bool)hasSourceTimeZoneIdentifier;
- (bool)hasUserData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSourceLocaleIdentifier:(id)arg1;
- (void)setSourceTimeZoneIdentifier:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)sourceLocaleIdentifier;
- (id)sourceTimeZoneIdentifier;
- (id)userData;
- (void)writeTo:(id)arg1;

@end
