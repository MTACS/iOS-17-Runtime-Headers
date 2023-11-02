
@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _automaticOutputBackingMode;
    unsigned long long  _classifyTopK;
    MLPredictionSyncPoint * _completionSyncPoint;
    bool  _enablePixelBufferDirectBinding;
    unsigned long long  _maxComputationBatchSize;
    NSDictionary * _outputBackings;
    unsigned long long  _parentSignpostID;
    bool  _usesCPUOnly;
    NSArray * _waitSyncPoints;
}

@property (nonatomic, copy) NSDictionary *automaticOutputBackingMode;
@property unsigned long long classifyTopK;
@property (nonatomic, retain) MLPredictionSyncPoint *completionSyncPoint;
@property (nonatomic) bool enablePixelBufferDirectBinding;
@property unsigned long long maxComputationBatchSize;
@property (nonatomic, copy) NSDictionary *outputBackings;
@property (nonatomic) unsigned long long parentSignpostID;
@property (nonatomic, readonly) bool predictionUsesCPU;
@property (nonatomic) bool usesCPUOnly;
@property (nonatomic, copy) NSArray *waitSyncPoints;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)automaticOutputBackingMode;
- (unsigned long long)classifyTopK;
- (id)completionSyncPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enablePixelBufferDirectBinding;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsesCPUOnly:(bool)arg1;
- (unsigned long long)maxComputationBatchSize;
- (id)outputBackings;
- (unsigned long long)parentSignpostID;
- (bool)predictionUsesCPU;
- (void)setAutomaticOutputBackingMode:(id)arg1;
- (void)setClassifyTopK:(unsigned long long)arg1;
- (void)setCompletionSyncPoint:(id)arg1;
- (void)setEnablePixelBufferDirectBinding:(bool)arg1;
- (void)setMaxComputationBatchSize:(unsigned long long)arg1;
- (void)setOutputBackings:(id)arg1;
- (void)setParentSignpostID:(unsigned long long)arg1;
- (void)setUsesCPUOnly:(bool)arg1;
- (void)setWaitSyncPoints:(id)arg1;
- (bool)usesCPUOnly;
- (id)waitSyncPoints;

@end
