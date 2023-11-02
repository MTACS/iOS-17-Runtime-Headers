
@interface SYObjectChangeSet : NSObject {
    NSMutableSet * _added;
    NSMutableSet * _deleted;
    NSMutableSet * _updated;
}

@property (nonatomic, copy) NSMutableSet *added;
@property (nonatomic, copy) NSMutableSet *deleted;
@property (nonatomic, copy) NSMutableSet *updated;

- (void).cxx_destruct;
- (id)added;
- (void)applyToStore:(id)arg1;
- (id)changesBetween:(id)arg1 and:(id)arg2;
- (id)deleted;
- (id)init;
- (id)initWithChangesBetween:(id)arg1 and:(id)arg2;
- (void)setAdded:(id)arg1;
- (void)setDeleted:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)updated;

@end
