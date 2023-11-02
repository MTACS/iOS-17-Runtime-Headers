
@interface REUpNextSetNode : NSObject {
    NSMutableArray * _children;
    id  _item;
    REUpNextSetNode * _parent;
    unsigned long long  _rank;
}

@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, readonly) id item;
@property (nonatomic, retain) REUpNextSetNode *parent;
@property (nonatomic) unsigned long long rank;

- (void).cxx_destruct;
- (id)children;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)join:(id)arg1;
- (id)parent;
- (unsigned long long)rank;
- (void)remove;
- (id)rootNode;
- (void)setChildren:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setRank:(unsigned long long)arg1;

@end
