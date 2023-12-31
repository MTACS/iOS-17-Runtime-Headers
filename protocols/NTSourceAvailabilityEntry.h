
@protocol NTSourceAvailabilityEntry <NSObject>

@required

- (id /* block */)availabilityChangedNotificationBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)isAvailable;
- (bool)isLikelyAvailable;
- (void)setAvailabilityChangedNotificationBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (Class)todayResultsFetchDescriptorClass;

@end
