
@protocol HFAccessoryVendor <NSObject>

@required

- (NSSet *)accessories;

@optional

- (NSArray *)mediaProfileContainers;

@end
