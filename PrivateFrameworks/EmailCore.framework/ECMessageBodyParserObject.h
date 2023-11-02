
@interface ECMessageBodyParserObject : NSObject {
    bool  _didTimeout;
    bool  _shouldAbort;
    double  _timeoutInterval;
    double  _timeoutTime;
}

@property (nonatomic) double timeoutInterval;

- (void)abortParsing;
- (void)messageBodyParserWillBeginParsing:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (bool)shouldProceedParsing;
- (double)timeoutInterval;

@end
