
@protocol HFGroupableItemProtocol <HFHomeKitItemProtocol>

@required

- (bool)isContainedWithinItemGroup;
- (bool)isItemGroup;
- (unsigned long long)numberOfItemsContainedWithinGroup;

@end
