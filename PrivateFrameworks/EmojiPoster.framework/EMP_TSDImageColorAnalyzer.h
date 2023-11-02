
@interface EMP_TSDImageColorAnalyzer : NSObject {
    void * _imageAnalyzer;
    NSMutableOrderedSet * _interestingColors;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSArray *dominantColors;
@property (nonatomic, readonly) NSOrderedSet *interestingColors;

- (void).cxx_destruct;
- (id)backgroundColor;
- (void)dealloc;
- (id)dominantColors;
- (void)filterInterestingColorsUsingBlock:(id /* block */)arg1;
- (id)initWithImage:(id)arg1;
- (id)interestingColors;
- (void)p_prepareInterestingColors;
- (id)textColorForBackgroundColor:(id)arg1;
- (id)textShadowColorForTextColor:(id)arg1 backgroundColor:(id)arg2;

@end
