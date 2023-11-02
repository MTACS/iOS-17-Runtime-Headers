
@interface SUUIStoreItemRelationship : NSObject {
    NSSet * _chidItems;
    SUUIStoreIdentifier * _singleParent;
}

@property (nonatomic, readonly, copy) NSSet *chidItems;
@property (nonatomic, readonly, copy) SUUIStoreIdentifier *singleParent;

- (void).cxx_destruct;
- (id)chidItems;
- (id)initWithParent:(id)arg1 andChildren:(id)arg2;
- (id)singleParent;

@end
