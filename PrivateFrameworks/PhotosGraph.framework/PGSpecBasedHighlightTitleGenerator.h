
@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator {
    bool  _createVerboseTitle;
    NSString * _meaningLabel;
}

@property (nonatomic, readonly) bool createVerboseTitle;
@property (nonatomic, readonly) NSString *meaningLabel;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (bool)createVerboseTitle;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(bool)arg3 titleGenerationContext:(id)arg4;
- (id)initWithMomentNodes:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(bool)arg3 titleGenerationContext:(id)arg4;
- (id)meaningLabel;

@end
