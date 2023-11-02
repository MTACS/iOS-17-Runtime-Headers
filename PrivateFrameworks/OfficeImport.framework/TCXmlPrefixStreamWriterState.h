
@interface TCXmlPrefixStreamWriterState : NSObject {
    NSString * _attributePrefix;
    NSString * _elementPrefix;
}

@property (nonatomic, copy) NSString *attributePrefix;
@property (nonatomic, copy) NSString *elementPrefix;

- (void).cxx_destruct;
- (id)attributePrefix;
- (id)elementPrefix;
- (void)setAttributePrefix:(id)arg1;
- (void)setElementPrefix:(id)arg1;

@end
