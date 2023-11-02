
@interface INManagedDefaults : NSObject

+ (id)sharedInstance;

- (id)_readManagedDefaults;
- (void)_writeManagedDefaults:(id)arg1;
- (void)setValue:(id)arg1 forManagedDefault:(id)arg2;
- (id)valueForManagedDefault:(id)arg1;

@end
