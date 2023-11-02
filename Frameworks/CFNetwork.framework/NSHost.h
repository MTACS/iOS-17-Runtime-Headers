
@interface NSHost : NSObject {
    NSArray * addresses;
    NSArray * names;
    id  reserved;
}

@property (readonly, copy) NSString *address;
@property (readonly, copy) NSArray *addresses;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *names;

+ (id)currentHost;
+ (void)flushHostCache;
+ (id)hostWithAddress:(id)arg1;
+ (id)hostWithName:(id)arg1;
+ (bool)isHostCacheEnabled;
+ (void)setHostCacheEnabled:(bool)arg1;

- (id)_thingToResolve;
- (id)address;
- (id)addresses;
- (void)dealloc;
- (id)description;
- (bool)isEqualToHost:(id)arg1;
- (id)localizedName;
- (id)name;
- (id)names;

@end
