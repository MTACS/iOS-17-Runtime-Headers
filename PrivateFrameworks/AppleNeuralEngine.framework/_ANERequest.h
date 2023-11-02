
@interface _ANERequest : NSObject {
    id /* block */  _completionHandler;
    NSArray * _inputArray;
    NSArray * _inputIndexArray;
    NSArray * _outputArray;
    NSArray * _outputIndexArray;
    _ANEPerformanceStats * _perfStats;
    NSArray * _perfStatsArray;
    NSNumber * _procedureIndex;
    _ANESharedEvents * _sharedEvents;
    NSNumber * _transactionHandle;
    _ANEIOSurfaceObject * _weightsBuffer;
}

@property (copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSArray *inputArray;
@property (nonatomic, readonly) NSArray *inputIndexArray;
@property (nonatomic, readonly) NSArray *outputArray;
@property (nonatomic, readonly) NSArray *outputIndexArray;
@property (nonatomic, retain) _ANEPerformanceStats *perfStats;
@property (nonatomic, readonly) NSArray *perfStatsArray;
@property (nonatomic, readonly, copy) NSNumber *procedureIndex;
@property (nonatomic, retain) _ANESharedEvents *sharedEvents;
@property (nonatomic, copy) NSNumber *transactionHandle;
@property (nonatomic, readonly) _ANEIOSurfaceObject *weightsBuffer;

+ (id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 perfStats:(id)arg5 procedureIndex:(id)arg6;
+ (id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 procedureIndex:(id)arg5;
+ (id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 perfStats:(id)arg6 procedureIndex:(id)arg7;
+ (id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 perfStats:(id)arg6 procedureIndex:(id)arg7 sharedEvents:(id)arg8;
+ (id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 perfStats:(id)arg6 procedureIndex:(id)arg7 sharedEvents:(id)arg8 transactionHandle:(id)arg9;
+ (id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 procedureIndex:(id)arg6;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (id)initWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 perfStats:(id)arg6 procedureIndex:(id)arg7 sharedEvents:(id)arg8 transactionHandle:(id)arg9;
- (id)initWithVirtualModel:(void*)arg1;
- (id)inputArray;
- (id)inputIndexArray;
- (unsigned long long)ioSurfacesCount;
- (id)outputArray;
- (id)outputIndexArray;
- (id)perfStats;
- (id)perfStatsArray;
- (id)procedureIndex;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPerfStats:(id)arg1;
- (void)setSharedEvents:(id)arg1;
- (void)setTransactionHandle:(id)arg1;
- (id)sharedEvents;
- (id)transactionHandle;
- (bool)validate;
- (id)weightsBuffer;

@end
