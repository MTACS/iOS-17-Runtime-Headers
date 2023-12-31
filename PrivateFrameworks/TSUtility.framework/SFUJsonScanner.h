
@interface SFUJsonScanner : NSObject {
    unsigned short * mCharacters;
    NSCharacterSet * mDecimalDigitCharacterSet;
    unsigned long long  mLength;
    unsigned long long  mOffset;
    NSString * mString;
    NSCharacterSet * mWhitespaceCharacterSet;
}

- (void)appendCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toString:(id)arg2;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (unsigned short)nextCharacter;
- (id)parseArrayWithMaxDepth:(int)arg1;
- (bool)parseConstantString:(const char *)arg1;
- (id)parseDictionaryWithMaxDepth:(int)arg1;
- (id)parseFalse;
- (id)parseHexCharacter;
- (id)parseNull;
- (id)parseNumber;
- (id)parseObjectWithMaxDepth:(int)arg1;
- (id)parseString;
- (id)parseTrue;
- (void)skipWhitespace;

@end
