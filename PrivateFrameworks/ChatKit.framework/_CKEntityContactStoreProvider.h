
@interface _CKEntityContactStoreProvider : NSObject <CKEntityContactStoreProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)contactStore;

@end
