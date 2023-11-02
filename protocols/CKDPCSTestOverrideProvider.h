
@protocol CKDPCSTestOverrideProvider

@required

- (bool)_checkAndClearPCSTestOverrideForKey:(NSString *)arg1;
- (bool)_checkPCSTestOverrideForKey:(NSString *)arg1;
- (id)_pcsTestOverrideForKey:(NSString *)arg1;

@end
