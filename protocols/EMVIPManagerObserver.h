
@protocol EMVIPManagerObserver <NSObject>

@required

- (void)observer:(EMObjectID *)arg1 gotVIPs:(NSSet *)arg2;
- (void)observer:(EMObjectID *)arg1 updatedVIPs:(NSSet *)arg2 removedVIPs:(NSSet *)arg3;

@end
