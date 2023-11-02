
@interface WFTagFieldParameter : WFParameter {
    NSString * _autocapitalizationType;
    NSString * _autocorrectionType;
    NSString * _keyboardType;
    NSArray * _suggestedTags;
    NSString * _textAlignment;
}

@property (nonatomic, readonly) NSString *autocapitalizationType;
@property (nonatomic, readonly) NSString *autocorrectionType;
@property (nonatomic, readonly) NSString *keyboardType;
@property (nonatomic, readonly) NSArray *suggestedTags;
@property (nonatomic, readonly) NSString *textAlignment;

- (void).cxx_destruct;
- (id)autocapitalizationType;
- (id)autocorrectionType;
- (id)initWithDefinition:(id)arg1;
- (id)keyboardType;
- (bool)shouldAlignLabels;
- (Class)singleStateClass;
- (id)suggestedTags;
- (id)textAlignment;

@end
