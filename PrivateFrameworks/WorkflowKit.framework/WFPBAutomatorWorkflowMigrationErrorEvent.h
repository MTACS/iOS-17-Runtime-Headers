
@interface WFPBAutomatorWorkflowMigrationErrorEvent : PBCodable <NSCopying> {
    NSString * _automatorActionIdentifier;
    NSString * _errorDescription;
    NSString * _key;
}

@property (nonatomic, retain) NSString *automatorActionIdentifier;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, readonly) bool hasAutomatorActionIdentifier;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)automatorActionIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (bool)hasAutomatorActionIdentifier;
- (bool)hasErrorDescription;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutomatorActionIdentifier:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
