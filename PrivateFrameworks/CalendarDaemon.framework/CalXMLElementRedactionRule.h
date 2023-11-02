
@interface CalXMLElementRedactionRule : NSObject {
    NSDictionary * _attributes;
    int  _cdata;
    int  _content;
    int  _elementName;
}

@property (retain) NSDictionary *attributes;
@property int cdata;
@property int content;
@property int elementName;

- (void).cxx_destruct;
- (id)attributes;
- (int)cdata;
- (int)content;
- (int)elementName;
- (id)redactionRuleForAttribute:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCdata:(int)arg1;
- (void)setContent:(int)arg1;
- (void)setElementName:(int)arg1;

@end
