
@interface WFTumblrBlogPickerParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
    WFTumblrAccessResource * _tumblrAccessResource;
}

@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, retain) WFTumblrAccessResource *tumblrAccessResource;

+ (void)initialize;
+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (bool)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)setActionResources:(id)arg1;
- (void)setTumblrAccessResource:(id)arg1;
- (Class)singleStateClass;
- (id)tumblrAccessResource;
- (void)updateBlogs;
- (void)wasAddedToWorkflow;

@end
