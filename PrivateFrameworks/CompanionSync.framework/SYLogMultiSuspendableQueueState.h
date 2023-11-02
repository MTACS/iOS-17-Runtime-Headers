
@interface SYLogMultiSuspendableQueueState : PBCodable <NSCopying> {
    struct { 
        unsigned int resumeCount : 1; 
    }  _has;
    NSString * _label;
    int  _resumeCount;
    NSString * _target;
}

@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasResumeCount;
@property (nonatomic, readonly) bool hasTarget;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) int resumeCount;
@property (nonatomic, retain) NSString *target;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasResumeCount;
- (bool)hasTarget;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resumeCount;
- (void)setHasResumeCount:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setResumeCount:(int)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)writeTo:(id)arg1;

@end
