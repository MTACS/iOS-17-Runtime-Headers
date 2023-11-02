
@interface WFHomeKitAccessResource : WFAccessResource <WFHomeManagerEventObserver> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSystemResource;

- (void).cxx_destruct;
- (id)associatedAppIdentifier;
- (id /* block */)completionHandler;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)protectedResourceDescription;
- (void)setCompletionHandler:(id /* block */)arg1;
- (unsigned long long)status;

@end
