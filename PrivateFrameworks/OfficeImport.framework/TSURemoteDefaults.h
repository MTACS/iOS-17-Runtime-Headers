
@interface TSURemoteDefaults : TSURemotePropertyList

+ (id)sharedDefaults;

- (id)initInternal;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)processPropertyList:(id)arg1;
- (void)registerDefaults;

@end
