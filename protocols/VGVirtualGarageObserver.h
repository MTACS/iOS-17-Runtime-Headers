
@protocol VGVirtualGarageObserver

@required

- (void)virtualGarageDidUpdate:(VGVirtualGarage *)arg1;

@optional

- (void)virtualGarage:(VGVirtualGarage *)arg1 didUpdateUnpairedVehicles:(NSArray *)arg2;

@end
