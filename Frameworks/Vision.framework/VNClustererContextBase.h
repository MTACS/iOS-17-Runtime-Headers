
@interface VNClustererContextBase : NSObject {
    NSString * _cacheDirectoryPath;
    unsigned long long  _faceprintRequestRevision;
    bool  _readOnly;
    NSNumber * _threshold;
    NSNumber * _torsoThreshold;
    unsigned long long  _torsoprintRequestRevision;
    NSString * _type;
}

- (void).cxx_destruct;
- (bool)_checkInitInputs:(id)arg1 cachePath:(id)arg2 checkType:(id)arg3 requestRevision:(unsigned long long)arg4 error:(id*)arg5;
- (id)_createGreedyClusterer:(Class)arg1 state:(id)arg2 error:(id*)arg3;
- (void)_initializeGreedyClustererOptions:(id)arg1;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(bool)arg4 threshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id*)arg7;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(bool)arg4 threshold:(float)arg5 requestRevision:(unsigned long long)arg6 torsoprintRequestRevision:(unsigned long long)arg7 error:(id*)arg8;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(bool)arg4 threshold:(float)arg5 torsoThreshold:(float)arg6 requestRevision:(unsigned long long)arg7 error:(id*)arg8;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(bool)arg4 threshold:(float)arg5 torsoThreshold:(float)arg6 requestRevision:(unsigned long long)arg7 torsoprintRequestRevision:(unsigned long long)arg8 error:(id*)arg9;

@end
