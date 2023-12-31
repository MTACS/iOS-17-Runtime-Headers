
@interface _CKAddressBookMonogrammerProvider : NSObject <CKAddressBookMonogrammerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)monogrammerForStyle:(long long)arg1 diameter:(double)arg2;

@end
