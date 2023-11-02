
@interface MPPThreadKeyExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {
    unsigned long long  _key;
    id  _owner;
}

+ (id)tokenWithKey:(unsigned long long)arg1 owner:(id)arg2;

- (id)_init;
- (void)assertHasExclusiveAccessForOwner:(id)arg1;

@end
