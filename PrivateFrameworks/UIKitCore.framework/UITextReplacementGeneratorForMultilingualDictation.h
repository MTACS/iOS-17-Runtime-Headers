
@interface UITextReplacementGeneratorForMultilingualDictation : UITextReplacementGenerator {
    NSArray * _multilingualAlternatives;
}

@property (nonatomic, readonly) NSArray *multilingualAlternatives;

- (void).cxx_destruct;
- (id)initWithMultilingualAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3;
- (id)multilingualAlternatives;
- (id)replacements;

@end
