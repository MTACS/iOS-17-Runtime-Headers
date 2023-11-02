
@protocol HFServiceLikeBuilder <HFAccessoryVendor, HFNamedItemBuilder, NSObject>

@required

- (NSString *)originalName;
- (NAFuture *)removeItemFromHome;
- (HFRoomBuilder *)room;
- (void)setRoom:(HFRoomBuilder *)arg1;
- (bool)supportsFavoriting;

@optional

- (NSArray *)availableIconDescriptors;
- (<HFIconDescriptor> *)iconDescriptor;
- (bool)isFavorite;
- (void)setIconDescriptor:(id <HFIconDescriptor>)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setShowInHomeDashboard:(bool)arg1;
- (bool)showInHomeDashboard;

@end
