
@interface ACProtobufDataclassAction : PBCodable <NSCopying> {
    NSMutableArray * _affectedContainers;
    bool  _destructive;
    int  _type;
    NSString * _undoAlertMessage;
    NSString * _undoAlertTitle;
}

@property (nonatomic, retain) NSMutableArray *affectedContainers;
@property (nonatomic) bool destructive;
@property (nonatomic, readonly) bool hasUndoAlertMessage;
@property (nonatomic, readonly) bool hasUndoAlertTitle;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *undoAlertMessage;
@property (nonatomic, retain) NSString *undoAlertTitle;

+ (Class)affectedContainersType;

- (void).cxx_destruct;
- (void)addAffectedContainers:(id)arg1;
- (id)affectedContainers;
- (id)affectedContainersAtIndex:(unsigned long long)arg1;
- (unsigned long long)affectedContainersCount;
- (void)clearAffectedContainers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)destructive;
- (id)dictionaryRepresentation;
- (bool)hasUndoAlertMessage;
- (bool)hasUndoAlertTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAffectedContainers:(id)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setUndoAlertMessage:(id)arg1;
- (void)setUndoAlertTitle:(id)arg1;
- (int)type;
- (id)undoAlertMessage;
- (id)undoAlertTitle;
- (void)writeTo:(id)arg1;

@end
