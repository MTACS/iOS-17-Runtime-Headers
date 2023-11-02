
@interface HDOntologyTSVScanner : NSObject {
    NSScanner * _scanner;
}

@property (getter=isAtEnd, readonly) bool atEnd;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithString:(id)arg1;
- (bool)isAtEnd;
- (bool)scanLongLong:(long long*)arg1;
- (bool)scanString:(id*)arg1;

@end
