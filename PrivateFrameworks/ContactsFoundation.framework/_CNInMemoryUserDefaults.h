
@interface _CNInMemoryUserDefaults : CNUserDefaults

@property (nonatomic, readonly) unsigned long long synchronizeCount;

- (id)init;
- (unsigned long long)synchronizeCount;

@end
