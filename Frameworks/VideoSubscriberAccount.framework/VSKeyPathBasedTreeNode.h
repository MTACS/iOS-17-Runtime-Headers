
@interface VSKeyPathBasedTreeNode : VSTreeNode {
    NSString * _keyPath;
}

@property (nonatomic, readonly, copy) NSString *keyPath;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 keyPath:(id)arg2;
- (id)keyPath;

@end
