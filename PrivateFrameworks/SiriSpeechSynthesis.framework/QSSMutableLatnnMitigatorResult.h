
@interface QSSMutableLatnnMitigatorResult : QSSLatnnMitigatorResult

@property (nonatomic) bool processed;
@property (nonatomic) double score;
@property (nonatomic) double threshold;
@property (nonatomic, copy) NSString *version;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)processed;
- (double)score;
- (void)setProcessed:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setThreshold:(double)arg1;
- (void)setVersion:(id)arg1;
- (double)threshold;
- (id)version;

@end
