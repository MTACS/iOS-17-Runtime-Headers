
@interface OIXMLNode : NSObject <NSCopying>

@property (readonly) NSString *XMLString;
@property (readonly) NSString *closingTagString;
@property (readonly) NSString *contentString;
@property (readonly) NSString *name;
@property (readonly) NSString *openingTagString;
@property (retain) NSString *stringValue;

+ (void)_escapeCharacters:(const unsigned short*)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(bool)arg3 inString:(id)arg4 appendingToString:(struct __CFString { }*)arg5;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString { }*)arg3;

- (id)XMLString;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1 level:(int)arg2;
- (id)closingTagString;
- (id)contentString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)name;
- (id)openingTagString;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end