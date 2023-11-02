
@interface XRXMLSimpleStringElementParser : XRXMLElementParser {
    NSMutableString * accumulator;
}

@property (nonatomic, readonly) NSString *stringValue;

- (void).cxx_destruct;
- (void)_handleCharacters:(id)arg1;
- (void)_handleCompletion;
- (id)collapsedStringValue;
- (id)stringValue;

@end
