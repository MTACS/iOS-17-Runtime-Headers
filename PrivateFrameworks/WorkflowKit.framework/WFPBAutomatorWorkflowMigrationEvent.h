
@interface WFPBAutomatorWorkflowMigrationEvent : PBCodable <NSCopying> {
    unsigned int  _automatorActionCount;
    bool  _completed;
    struct { 
        unsigned int automatorActionCount : 1; 
        unsigned int completed : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic) unsigned int automatorActionCount;
@property (nonatomic) bool completed;
@property (nonatomic) bool hasAutomatorActionCount;
@property (nonatomic) bool hasCompleted;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (unsigned int)automatorActionCount;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutomatorActionCount;
- (bool)hasCompleted;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutomatorActionCount:(unsigned int)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setHasAutomatorActionCount:(bool)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
