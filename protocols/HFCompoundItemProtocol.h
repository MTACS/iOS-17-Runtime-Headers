
@protocol HFCompoundItemProtocol <HFHomeKitItemProtocol>

@required

- (bool)isCompoundItem;
- (unsigned long long)numberOfCompoundItems;
- (<HFHomeKitObject> *)primaryHomeKitObject;

@optional

- (NSArray *)allHomeKitObjects;

@end
