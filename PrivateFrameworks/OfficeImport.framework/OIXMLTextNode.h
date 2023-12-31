
@interface OIXMLTextNode : OIXMLNode {
    NSString * _value;
}

+ (id)textNodeWithStringValue:(id)arg1;

- (void).cxx_destruct;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1 level:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)name;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
