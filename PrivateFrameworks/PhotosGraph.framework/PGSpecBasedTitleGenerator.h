
@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate> {
    <PGSpecBasedTitleGeneratorDelegate> * _delegate;
    NSSet * _features;
    unsigned long long  _lineBreakBehavior;
    NSSet * _momentNodes;
    PGTitleSpecCollection * _specCollection;
    PGTitle * _title;
    PGTitleGenerationContext * _titleGenerationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property <PGSpecBasedTitleGeneratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *features;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic, retain) NSSet *momentNodes;
@property (nonatomic, retain) PGTitleSpecCollection *specCollection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PGTitle *title;

- (void).cxx_destruct;
- (id)_title;
- (id)_titleFromSpecs:(id)arg1;
- (id)delegate;
- (id)features;
- (id)initWithMomentNodes:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(bool)arg4 titleGenerationContext:(id)arg5;
- (id)initWithMomentNodes:(id)arg1 features:(id)arg2 specCollection:(id)arg3 titleGenerationContext:(id)arg4;
- (id)initWithMomentNodes:(id)arg1 meaningLabel:(id)arg2 titleGenerationContext:(id)arg3;
- (id)initWithMomentNodes:(id)arg1 memoryCategory:(unsigned long long)arg2 subcategory:(unsigned long long)arg3 titleGenerationContext:(id)arg4;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 memoryCategory:(unsigned long long)arg3 subcategory:(unsigned long long)arg4 titleGenerationContext:(id)arg5;
- (id)initWithMomentNodes:(id)arg1 specCollection:(id)arg2 titleGenerationContext:(id)arg3;
- (unsigned long long)lineBreakBehavior;
- (id)momentNodes;
- (void)setDelegate:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setLineBreakBehavior:(unsigned long long)arg1;
- (void)setMomentNodes:(id)arg1;
- (void)setSpecCollection:(id)arg1;
- (id)specCollection;
- (id)title;
- (id)titleSpec:(id)arg1 inputForArgument:(id)arg2;

@end
