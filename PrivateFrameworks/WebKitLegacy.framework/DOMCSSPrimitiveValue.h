
@interface DOMCSSPrimitiveValue : DOMCSSValue

@property (readonly) unsigned short primitiveType;

- (id)getCounterValue;
- (float)getFloatValue:(unsigned short)arg1;
- (id)getRGBColorValue;
- (id)getRectValue;
- (id)getStringValue;
- (unsigned short)primitiveType;
- (void)setFloatValue:(unsigned short)arg1 :(float)arg2;
- (void)setFloatValue:(unsigned short)arg1 floatValue:(float)arg2;
- (void)setStringValue:(unsigned short)arg1 :(id)arg2;
- (void)setStringValue:(unsigned short)arg1 stringValue:(id)arg2;

@end
