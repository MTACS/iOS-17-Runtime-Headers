
@interface PPScoreInterpreterBytecode : NSObject {
    struct __CFBitVector { } * _arrayScoreInputsNeeded;
    NSArray * _bytecodeDataBySubscoreTypeAndIndex;
    NSArray * _bytecodeRetainedObjectSlots;
    struct __CFBitVector { } * _objectScoreInputsNeeded;
    struct __CFBitVector { } * _scalarScoreInputsNeeded;
    struct unique_ptr<std::vector<PPSubscoreIdentifier>, std::default_delete<std::vector<PPSubscoreIdentifier>>> { 
        struct __compressed_pair<std::vector<PPSubscoreIdentifier> *, std::default_delete<std::vector<PPSubscoreIdentifier>>> { 
            void *__value_; 
        } __ptr_; 
    }  _subscoreComputeOrder;
    struct unique_ptr<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> { 
        struct __compressed_pair<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>> *, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> { 
            void *__value_; 
        } __ptr_; 
    }  _subscoreDependencies;
}

@property (nonatomic, readonly) struct __CFBitVector { }*arrayScoreInputsNeeded;
@property (nonatomic, readonly) struct __CFBitVector { }*objectScoreInputsNeeded;
@property (nonatomic, readonly) struct __CFBitVector { }*scalarScoreInputsNeeded;

+ (id)bytecodeFromAsset:(id)arg1;
+ (id)bytecodeFromFactorName:(id)arg1 namespaceName:(id)arg2;
+ (id)scoreInterpreterParseRootFromAsset:(id)arg1 scalarSubscoreCount:(unsigned long long*)arg2 arraySubscoreCount:(unsigned long long*)arg3 objectSubscoreCount:(unsigned long long*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __CFBitVector { }*)arrayScoreInputsNeeded;
- (void)dealloc;
- (id)init;
- (id)initWithParseRoot:(id)arg1 scalarSubscoreCount:(unsigned long long)arg2 arraySubscoreCount:(unsigned long long)arg3 objectSubscoreCount:(unsigned long long)arg4;
- (struct __CFBitVector { }*)objectScoreInputsNeeded;
- (struct __CFBitVector { }*)scalarScoreInputsNeeded;

@end
