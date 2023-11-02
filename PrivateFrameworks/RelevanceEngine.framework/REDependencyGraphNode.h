
@interface REDependencyGraphNode : NSObject {
    NSHashTable * _connections;
    id  _item;
}

@property (nonatomic, retain) NSHashTable *connections;
@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)connections;
- (unsigned long long)hash;
- (id)initWithItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (void)setConnections:(id)arg1;

@end
