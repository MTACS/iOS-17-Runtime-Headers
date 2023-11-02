
@interface VNClustererOptions : NSObject {
    NSString * _cachePath;
    unsigned long long  _requestRevision;
    NSData * _state;
    float  _threshold;
    float  _torsoThreshold;
    unsigned long long  _torsoprintRequestRevision;
    NSString * _type;
}

@property (nonatomic, copy) NSString *cachePath;
@property (nonatomic) unsigned long long requestRevision;
@property (nonatomic, retain) NSData *state;
@property (nonatomic) float threshold;
@property (nonatomic) float torsoThreshold;
@property (nonatomic) unsigned long long torsoprintRequestRevision;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)cachePath;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 torsoprintRequestRevision:(unsigned long long)arg7;
- (unsigned long long)requestRevision;
- (void)setCachePath:(id)arg1;
- (void)setRequestRevision:(unsigned long long)arg1;
- (void)setState:(id)arg1;
- (void)setThreshold:(float)arg1;
- (void)setTorsoThreshold:(float)arg1;
- (void)setTorsoprintRequestRevision:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (id)state;
- (float)threshold;
- (float)torsoThreshold;
- (unsigned long long)torsoprintRequestRevision;
- (id)type;

@end
