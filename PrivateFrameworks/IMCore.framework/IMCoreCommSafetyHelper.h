
@interface IMCoreCommSafetyHelper : NSObject

+ (id)sharedInstance;

- (id)_urlFromAddressList:(id)arg1;
- (void)addressesForParents:(id)arg1 completion:(id /* block */)arg2;
- (void)getOpenChatURLWith:(id /* block */)arg1;

@end
