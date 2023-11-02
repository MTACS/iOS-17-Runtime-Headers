
@interface WFPBAutomatorWorkflowActionMigrationEvent : PBCodable <NSCopying> {
    NSString * _automatorActionIdentifier;
    bool  _completed;
    struct { 
        unsigned int completed : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic, retain) NSString *automatorActionIdentifier;
@property (nonatomic) bool completed;
@property (nonatomic, readonly) bool hasAutomatorActionIdentifier;
@property (nonatomic) bool hasCompleted;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)automatorActionIdentifier;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutomatorActionIdentifier;
- (bool)hasCompleted;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutomatorActionIdentifier:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
