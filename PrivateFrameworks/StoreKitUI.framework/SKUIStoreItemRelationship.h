
@interface SKUIStoreItemRelationship : NSObject {
    NSSet * _chidItems;
    SKUIStoreIdentifier * _singleParent;
}

@property (nonatomic, readonly, copy) NSSet *chidItems;
@property (nonatomic, readonly, copy) SKUIStoreIdentifier *singleParent;

- (void).cxx_destruct;
- (id)chidItems;
- (id)initWithParent:(id)arg1 andChildren:(id)arg2;
- (id)singleParent;

@end
