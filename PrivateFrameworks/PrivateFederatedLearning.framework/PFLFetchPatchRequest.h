
@interface PFLFetchPatchRequest : PBRequest <NSCopying> {
    NSString * _taskId;
}

@property (nonatomic, readonly) bool hasTaskId;
@property (nonatomic, retain) NSString *taskId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
