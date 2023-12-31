
@interface RKEventIdentification : NSObject {
    float * _probabilities;
    NSArray * _tokenSequences;
}

@property (nonatomic, readonly) NSArray *tokenSequences;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)enumerateClassifiedTokens:(id /* block */)arg1;
- (void)enumerateTopKClassificationsForEachString:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)getTopKClassifications:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)init;
- (id)initWithOwnedTokenSequences:(id)arg1 probabilities:(float*)arg2;
- (id)tokenSequences;
- (struct { unsigned long long x1; float x2; })topClassification;

@end
