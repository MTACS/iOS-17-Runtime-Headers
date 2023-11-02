
@interface CalXMLAttributeRedactionRule : NSObject {
    int  _attributeName;
    int  _attributeValue;
}

@property int attributeName;
@property int attributeValue;

- (int)attributeName;
- (int)attributeValue;
- (void)setAttributeName:(int)arg1;
- (void)setAttributeValue:(int)arg1;

@end
