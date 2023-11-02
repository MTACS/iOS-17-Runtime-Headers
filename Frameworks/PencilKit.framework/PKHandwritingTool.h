
@interface PKHandwritingTool : PKTool {
    NSString * _localeIdentifier;
}

@property (nonatomic, readonly) NSString *localeIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;

@end
