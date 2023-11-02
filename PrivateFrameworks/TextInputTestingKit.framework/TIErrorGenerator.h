
@interface TIErrorGenerator : NSObject {
    unsigned int  _RNGSeedSalt;
    <TIKeyboardInfoDelegate> * _keyboardInfoDelgate;
    double  _probTappingSpaceInsteadOfBottomRow;
    double  _probTappingSpaceReplacedByBottomRow;
    float  _relErrorControlKeys;
    float  _relErrorNumbersPunctuation;
    long long  _spaceHorizontalErrorMode;
    double  _spaceVerticalBias;
    long long  _spacingErrorMaxCount;
    long long  _spacingErrorsApplied;
    void * m_distribution;
    void * m_generator;
}

@property (nonatomic) <TIKeyboardInfoDelegate> *keyboardInfoDelgate;
@property (nonatomic) double probTappingSpaceInsteadOfBottomRow;
@property (nonatomic) double probTappingSpaceReplacedByBottomRow;
@property (nonatomic) long long spaceHorizontalErrorMode;
@property (nonatomic) double spaceVerticalBias;
@property (nonatomic) long long spacingErrorMaxCount;
@property (nonatomic) long long spacingErrorsApplied;

+ (id)errorGeneratorWithAttributes:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)errorForKeyString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })globalBias;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)keyboardInfoDelgate;
- (struct CGPoint { double x1; double x2; })persistentBiasForBottomRow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })persistentBiasForKeyString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })persistentBiasForSpaceBarRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)probTappingSpaceInsteadOfBottomRow;
- (double)probTappingSpaceReplacedByBottomRow;
- (struct CGPoint { double x1; double x2; })randomErrorForKeyString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })randomPointInDistribution;
- (void)reset;
- (void)setKeyboardInfoDelgate:(id)arg1;
- (void)setProbTappingSpaceInsteadOfBottomRow:(double)arg1;
- (void)setProbTappingSpaceReplacedByBottomRow:(double)arg1;
- (void)setRandomNumberSeed:(unsigned int)arg1;
- (void)setSpaceHorizontalErrorMode:(long long)arg1;
- (void)setSpaceVerticalBias:(double)arg1;
- (void)setSpacingErrorMaxCount:(long long)arg1;
- (void)setSpacingErrorsApplied:(long long)arg1;
- (long long)spaceHorizontalErrorMode;
- (double)spaceVerticalBias;
- (long long)spacingErrorMaxCount;
- (long long)spacingErrorsApplied;
- (double)uniformRandomNumber;
- (struct CGPoint { double x1; double x2; })uniformRandomPointInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
