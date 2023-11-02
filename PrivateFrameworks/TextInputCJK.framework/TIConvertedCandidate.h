
@interface TIConvertedCandidate : NSObject {
    TIKeyboardCandidate * _candidate;
    NSString * _convertedInput;
    NSArray * _geometryData;
    NSArray * _replacedAmbiguousPinyinSyllables;
    NSArray * _replacementUnambiguousPinyinSyllables;
    NSArray * _touchData;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic, copy) NSString *convertedInput;
@property (nonatomic, copy) NSArray *geometryData;
@property (nonatomic, copy) NSArray *replacedAmbiguousPinyinSyllables;
@property (nonatomic, copy) NSArray *replacementUnambiguousPinyinSyllables;
@property (nonatomic, readonly) NSString *revertedInput;
@property (nonatomic, copy) NSArray *touchData;

- (void).cxx_destruct;
- (id)candidate;
- (id)convertedInput;
- (id)geometryData;
- (id)initWithCandidate:(id)arg1;
- (id)initWithCandidate:(id)arg1 replacedAmbiguousPinyinSyllables:(id)arg2 replacementUnambiguousPinyinSyllables:(id)arg3 convertedInput:(id)arg4;
- (id)replacedAmbiguousPinyinSyllables;
- (id)replacementUnambiguousPinyinSyllables;
- (id)revertedInput;
- (void)setCandidate:(id)arg1;
- (void)setConvertedInput:(id)arg1;
- (void)setGeometryData:(id)arg1;
- (void)setReplacedAmbiguousPinyinSyllables:(id)arg1;
- (void)setReplacementUnambiguousPinyinSyllables:(id)arg1;
- (void)setTouchData:(id)arg1;
- (id)touchData;

@end
