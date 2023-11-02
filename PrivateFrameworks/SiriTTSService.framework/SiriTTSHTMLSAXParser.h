
@interface SiriTTSHTMLSAXParser : NSObject {
    <SiriTTSHTMLSAXParserDelegate> * _delegate;
}

@property (nonatomic) <SiriTTSHTMLSAXParserDelegate> *delegate;

+ (void)initialize;

- (void).cxx_destruct;
- (id)delegate;
- (void)parse:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
