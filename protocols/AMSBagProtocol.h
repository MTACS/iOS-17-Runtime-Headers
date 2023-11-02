
@protocol AMSBagProtocol <NSObject>

@required

- (AMSBagValue *)URLForKey:(NSString *)arg1;
- (AMSBagValue *)arrayForKey:(NSString *)arg1;
- (AMSBagValue *)boolForKey:(NSString *)arg1;
- (void)createSnapshotWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSSnapshotBag *, NSError *, void*
- (AMSBagValue *)dictionaryForKey:(NSString *)arg1;
- (AMSBagValue *)doubleForKey:(NSString *)arg1;
- (NSDate *)expirationDate;
- (AMSBagValue *)integerForKey:(NSString *)arg1;
- (bool)isExpired;
- (NSString *)profile;
- (NSString *)profileVersion;
- (AMSBagValue *)stringForKey:(NSString *)arg1;

@optional

- (AMSBagValue *)URLForKey:(NSString *)arg1 account:(ACAccount *)arg2;
- (AMSProcessInfo *)processInfo;

@end
