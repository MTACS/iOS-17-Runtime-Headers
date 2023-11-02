
@interface SBHIconImageCacheRequest : NSObject <BSDescriptionProviding> {
    NSMutableArray * _completionHandlers;
    NSUUID * _identifier;
}

@property (nonatomic, readonly, copy) NSArray *completionHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)addCompletionHandlers:(id)arg1;
- (void)callCompletionHandlers;
- (id)completionHandlers;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
