
@interface POXSElement : NSObject {
    NSString * _elementName;
    NSString * _namespaceURI;
    Class  _type;
}

@property (nonatomic, readonly, copy) NSString *elementName;
@property (nonatomic, readonly, copy) NSString *namespaceURI;
@property (nonatomic, readonly) Class type;

- (void).cxx_destruct;
- (id)elementName;
- (id)init;
- (id)initWithElementName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3;
- (id)namespaceURI;
- (Class)type;

@end
