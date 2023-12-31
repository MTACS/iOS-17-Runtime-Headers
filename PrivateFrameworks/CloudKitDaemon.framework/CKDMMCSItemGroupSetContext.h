
@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling> {
    id /* block */  _itemGroupCompletionBlock;
    NSMutableArray * _itemGroupContexts;
    CKDMMCSItemGroupSet * _itemGroupSet;
    id /* block */  _itemGroupSetCompletionBlock;
    NSObject<OS_dispatch_group> * _itemGroupSetCompletionGroup;
    long long  _mmcsOperationType;
    CKDOperation * _operation;
}

@property (nonatomic, copy) id /* block */ itemGroupCompletionBlock;
@property (nonatomic, retain) NSMutableArray *itemGroupContexts;
@property (nonatomic, retain) CKDMMCSItemGroupSet *itemGroupSet;
@property (nonatomic, copy) id /* block */ itemGroupSetCompletionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *itemGroupSetCompletionGroup;
@property (nonatomic) long long mmcsOperationType;
@property (nonatomic) CKDOperation *operation;

- (void).cxx_destruct;
- (void)addItemGroupContext:(id)arg1;
- (void)cancel;
- (id)initWithItemGroupSet:(id)arg1 itemGroupSetCompletionBlock:(id /* block */)arg2;
- (id /* block */)itemGroupCompletionBlock;
- (id)itemGroupContexts;
- (id)itemGroupSet;
- (id /* block */)itemGroupSetCompletionBlock;
- (id)itemGroupSetCompletionGroup;
- (long long)mmcsOperationType;
- (id)operation;
- (void)setItemGroupCompletionBlock:(id /* block */)arg1;
- (void)setItemGroupContexts:(id)arg1;
- (void)setItemGroupSet:(id)arg1;
- (void)setItemGroupSetCompletionBlock:(id /* block */)arg1;
- (void)setItemGroupSetCompletionGroup:(id)arg1;
- (void)setMmcsOperationType:(long long)arg1;
- (void)setOperation:(id)arg1;
- (void)start;

@end
