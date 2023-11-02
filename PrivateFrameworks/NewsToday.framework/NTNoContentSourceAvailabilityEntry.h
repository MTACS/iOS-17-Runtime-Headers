
@interface NTNoContentSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {
    id /* block */  availabilityChangedNotificationBlock;
}

@property (nonatomic, copy) id /* block */ availabilityChangedNotificationBlock;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLikelyAvailable, nonatomic, readonly) bool likelyAvailable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class todayResultsFetchDescriptorClass;

- (void).cxx_destruct;
- (id /* block */)availabilityChangedNotificationBlock;
- (id)init;
- (bool)isAvailable;
- (bool)isLikelyAvailable;
- (void)setAvailabilityChangedNotificationBlock:(id /* block */)arg1;
- (Class)todayResultsFetchDescriptorClass;

@end
