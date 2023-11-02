
@interface HRETemplateRecommendationGenerator : HREStandardAsyncRecommendationSource {
    NSArray * _templates;
}

@property (nonatomic, retain) NSArray *templates;

+ (id)allAvailableTemplates;

- (void).cxx_destruct;
- (unsigned long long)disablingOptions;
- (id)filterTemplates:(id)arg1 withOptions:(unsigned long long)arg2;
- (Class)generationProcessClass;
- (id)initWithTemplates:(id)arg1;
- (void)setTemplates:(id)arg1;
- (void)setupProcess:(id)arg1;
- (id)templates;

@end
