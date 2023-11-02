
@interface IDSCKModifySubscriptionsOperation : IDSCKDatabaseOperation {
    id /* block */  _modifySubscriptionsCompletionBlock;
}

@property (nonatomic, copy) id /* block */ modifySubscriptionsCompletionBlock;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id /* block */)modifySubscriptionsCompletionBlock;
- (void)setModifySubscriptionsCompletionBlock:(id /* block */)arg1;

@end
