
@interface _ANEChainingRequest : NSObject <NSSecureCoding> {
    NSNumber * _fwEnqueueDelay;
    NSArray * _inputBuffer;
    NSArray * _loopbackInputSymbolIndex;
    NSArray * _loopbackOutputSymbolIndex;
    NSNumber * _memoryPoolId;
    NSArray * _outputSets;
    NSNumber * _procedureIndex;
    NSArray * _signalEvents;
    NSNumber * _transactionHandle;
}

@property (nonatomic, readonly) NSNumber *fwEnqueueDelay;
@property (nonatomic, readonly) NSArray *inputBuffer;
@property (nonatomic, readonly) NSArray *loopbackInputSymbolIndex;
@property (nonatomic, readonly) NSArray *loopbackOutputSymbolIndex;
@property (nonatomic, readonly) NSNumber *memoryPoolId;
@property (nonatomic, readonly) NSArray *outputSets;
@property (nonatomic, readonly) NSNumber *procedureIndex;
@property (nonatomic, readonly) NSArray *signalEvents;
@property (nonatomic, readonly) NSNumber *transactionHandle;

+ (id)chainingRequestWithInputs:(id)arg1 outputSets:(id)arg2 lbInputSymbolId:(id)arg3 lbOutputSymbolId:(id)arg4 procedureIndex:(id)arg5 signalEvents:(id)arg6 transactionHandle:(id)arg7 fwEnqueueDelay:(id)arg8 memoryPoolId:(id)arg9;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fwEnqueueDelay;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputs:(id)arg1 outputs:(id)arg2 lbInputSymbolId:(id)arg3 lbOutputSymbolId:(id)arg4 procedureIndex:(id)arg5 signalEvents:(id)arg6 transactionHandle:(id)arg7 fwEnqueueDelay:(id)arg8 memoryPoolId:(id)arg9;
- (id)inputBuffer;
- (id)loopbackInputSymbolIndex;
- (id)loopbackOutputSymbolIndex;
- (id)memoryPoolId;
- (id)outputSets;
- (id)procedureIndex;
- (id)signalEvents;
- (id)transactionHandle;
- (bool)validate;

@end
