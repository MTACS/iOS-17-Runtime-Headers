
@interface SGInteractionKey : SGMessageKey

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *personHandle;

+ (bool)isSupportedEntityType:(long long)arg1;

- (id)bundleId;
- (id)description;
- (id)init;
- (id)initWithBundleId:(id)arg1 personHandle:(id)arg2;
- (id)initWithSource:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)personHandle;

@end
