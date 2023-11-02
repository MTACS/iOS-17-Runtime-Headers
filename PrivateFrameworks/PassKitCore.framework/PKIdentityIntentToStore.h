
@interface PKIdentityIntentToStore : NSObject <NSCopying> {
    DIIdentityIntentToStore * _wrapped;
}

@property (retain) DIIdentityIntentToStore *wrapped;

+ (id)mayStoreIntent;
+ (id)mayStoreIntentForDays:(long long)arg1;
+ (id)willNotStoreIntent;

- (void).cxx_destruct;
- (id)asDIIdentityIntentToStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithDIIdentityIntentToStore:(id)arg1;
- (void)setWrapped:(id)arg1;
- (id)wrapped;

@end
