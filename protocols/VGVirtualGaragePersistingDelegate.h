
@protocol VGVirtualGaragePersistingDelegate <NSObject>

@required

- (void)garagePersister:(id <VGVirtualGaragePersisting>)arg1 wantsToUpdateVehicles:(NSArray *)arg2;

@end
