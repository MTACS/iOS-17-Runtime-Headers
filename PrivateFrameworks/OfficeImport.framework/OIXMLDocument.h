
@interface OIXMLDocument : OIXMLNode {
    NSString * _encoding;
    OIXMLElement * _rootElement;
    NSString * _version;
}

@property (copy) NSString *characterEncoding;
@property (retain) OIXMLElement *rootElement;
@property (copy) NSString *version;

- (void).cxx_destruct;
- (id)XMLString;
- (id)characterEncoding;
- (id)closingTagString;
- (id)contentString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createMutableXMLString;
- (id)description;
- (id)initWithRootElement:(id)arg1;
- (id)openingTagString;
- (id)rootElement;
- (void)setCharacterEncoding:(id)arg1;
- (void)setRootElement:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
