
@interface TIGainFocusEvent : TIContextChangeEvent {
    NSLocale * _locale;
    NSString * _originalDocumentText;
    NSArray * _originalWordEntries;
    NSArray * _originalWords;
}

@property (nonatomic, readonly) NSArray *originalWordEntries;

- (void).cxx_destruct;
- (id)initWithTIKeyboardState:(id)arg1 andLocale:(id)arg2;
- (id)originalDocumentText;
- (id)originalWordEntries;
- (id)originalWords;

@end
