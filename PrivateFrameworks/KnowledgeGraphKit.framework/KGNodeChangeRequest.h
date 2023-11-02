
@interface KGNodeChangeRequest : NSObject {
    <KGNode> * _node;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) <KGNode> *node;
@property (nonatomic, readonly) NSDictionary *properties;

- (void).cxx_destruct;
- (id)initWithNode:(id)arg1 properties:(id)arg2;
- (id)node;
- (id)properties;

@end
