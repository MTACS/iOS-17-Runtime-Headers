
@interface RUIXMLElement : NSObject {
    void attributtes;
    void children;
    void name;
    void parent;
    void stringValue;
}

@property (nonatomic, copy) NSDictionary *attributtes;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) RUIXMLElement *parent;

- (void).cxx_destruct;
- (void)appendChild:(id)arg1;
- (void)appendChildren:(id)arg1;
- (id)attributtes;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(id)arg2;
- (id)name;
- (id)parent;
- (void)setAttributtes:(id)arg1;
- (void)setParent:(id)arg1;

@end
