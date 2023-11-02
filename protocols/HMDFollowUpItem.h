
@protocol HMDFollowUpItem <NSObject>

@required

- (NSArray *)actions;
- (void)setActions:(NSArray *)arg1;
- (void)setTargetBundleIdentifier:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUniqueIdentifier:(NSString *)arg1;
- (NSString *)targetBundleIdentifier;
- (NSString *)title;
- (NSString *)uniqueIdentifier;

@end
