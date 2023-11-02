
@interface AMDDODMLDataProcessor : NSObject {
    NSArray * _actionArray;
    AMDDODMLAttachmentProcessor * _attachmentsProcessor;
    NSMutableDictionary * _coreDictionary;
    NSMutableDictionary * _elementsInSample;
    NSMutableDictionary * _inputDictionary;
    AMDClient * _myAMDClient;
    NSMutableDictionary * _numberInputsBound;
}

- (void).cxx_destruct;
- (id)aggregateArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)bindToBuffer:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)checkIfArrayEmptyAndThrowError:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)combineArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)constantValueMathFunction:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)destroyArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)downSampleData:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)filterArrayOnNumber:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)generateHashFromInputs:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)getCoreDictionary;
- (id)getCurrentTime:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)getElementInCoreDictionary:(id)arg1;
- (id)getElementInInputDictionary:(id)arg1;
- (id)getElementInNumberInputsBounds:(id)arg1;
- (id)getElementsInSampleDictionary;
- (id)getInputDictionary;
- (long long)getInputSize;
- (id)hashAdamIdsToIndices:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)hashFromCoreDictionary:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)ifStatement:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)initWithActionArray:(id)arg1 withAttachmentProcessor:(id)arg2;
- (id)insertArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)insertRawArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)padArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)parseAndCall:(id)arg1 withInputs:(id)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (id)processForLoop:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)processForLoopHelper:(id)arg1 withNumber:(id)arg2 withDictionary:(id)arg3;
- (id)processRecipe:(id*)arg1 errorDomain:(id)arg2;
- (id)randomizeArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)replicateArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)requestData:(id)arg1 withUseStubs:(long long)arg2 error:(id*)arg3 errorDomain:(id)arg4;
- (void)resetDataProcessorWithRecipe:(id)arg1;
- (id)sampleFromDistribution:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (void)setElementInCoreDictionary:(id)arg1 withKey:(id)arg2;
- (void)setElementsInCoreDictionary:(id)arg1;
- (id)sortArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)spliceArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)strideCopyAndSplitArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)strideCopyArray:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)twoArrayMathFunction:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;
- (id)windowFunction:(id)arg1 error:(id*)arg2 errorDomain:(id)arg3;

@end
