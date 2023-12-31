
@interface SXBlockComponentInsertionCacheValidator : NSObject <SXComponentInsertionCacheValidator> {
    id /* block */  _block;
}

@property (nonatomic, readonly) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)validatorWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (bool)validateCache:(id)arg1 DOMObjectProvider:(id)arg2;

@end
