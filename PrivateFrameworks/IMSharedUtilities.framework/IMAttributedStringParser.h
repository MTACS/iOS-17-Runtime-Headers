
@interface IMAttributedStringParser : NSObject {
    IMAttributedStringParserContext * _context;
}

+ (id)sharedInstance;

- (void)_preprocessWithContext:(id)arg1 string:(id*)arg2;
- (void)parseContext:(id)arg1;

@end
