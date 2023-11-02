
@interface PKApplicationMessageNode : NSObject {
    id  _context;
    PKApplicationMessageNode * _parent;
    long long  _type;
    bool  _visited;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, retain) id context;
@property (nonatomic, readonly) <NSObject><NSCopying> *key;
@property (nonatomic, readonly) unsigned long long numberOfChildren;
@property (nonatomic, readonly) PKApplicationMessageNode *parent;
@property (nonatomic, readonly) PKApplicationMessageNode *root;
@property (nonatomic, readonly) long long type;

+ (id)createForMessages:(id)arg1;
+ (id)messageKeysForNode:(id)arg1 localKeys:(id*)arg2;

- (void).cxx_destruct;
- (id)ancestorPassingTest:(id /* block */)arg1;
- (id)children;
- (id)context;
- (id)init;
- (id)key;
- (unsigned long long)numberOfChildren;
- (id)parent;
- (id)root;
- (void)setContext:(id)arg1;
- (long long)type;
- (void)visitPostOrder:(id /* block */)arg1;
- (void)visitPreOrder:(id /* block */)arg1;

@end
