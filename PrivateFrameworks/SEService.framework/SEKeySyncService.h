
@interface SEKeySyncService : NSObject

+ (void)recoveryDidComplete:(id)arg1;
+ (void)shouldRollKeysNow:(id)arg1 altDISD:(id)arg2;
+ (id)transcodeTLKShares:(id)arg1 fromCurrentIdentifier:(id)arg2 toIdentity:(id)arg3 outError:(id*)arg4;

@end
