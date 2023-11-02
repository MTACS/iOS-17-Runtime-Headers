
@interface VCPBIntentDefinitionChange : PBCodable <NSCopying> {
    NSString * _associatedBundleID;
    int  _changeType;
    VCPBIntentDefinition * _intentDefinition;
}

@property (nonatomic, retain) NSString *associatedBundleID;
@property (nonatomic) int changeType;
@property (nonatomic, readonly) bool hasIntentDefinition;
@property (nonatomic, retain) VCPBIntentDefinition *intentDefinition;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (id)associatedBundleID;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntentDefinition;
- (unsigned long long)hash;
- (id)intentDefinition;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedBundleID:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setIntentDefinition:(id)arg1;
- (void)writeTo:(id)arg1;

@end
