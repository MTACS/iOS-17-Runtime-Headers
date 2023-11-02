
@interface MPUHTMLParser : NSObject {
    _MPUHTMLDefaultDelegate * _defaultDelegate;
    <MPUHTMLParserDelegate> * _delegate;
}

@property (nonatomic) <MPUHTMLParserDelegate> *delegate;

+ (id)attributedSanitizedStringFromHTMLString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)displayDelegateWithDefaultAttributes:(id)arg1;
+ (id)parser;
+ (id)parserWithDefaultAttributes:(id)arg1;
+ (id)sanitizedHTMLString:(id)arg1;

- (void).cxx_destruct;
- (id)attributedStringForHTMLString:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
