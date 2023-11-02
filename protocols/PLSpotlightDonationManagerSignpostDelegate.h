
@protocol PLSpotlightDonationManagerSignpostDelegate <NSObject>

@required

- (void)beginSignpostIntervalForOperationType:(unsigned long long)arg1 searchableItemCount:(unsigned long long)arg2;
- (void)endSignpostIntervalForOperationType:(unsigned long long)arg1 searchableItemCount:(unsigned long long)arg2;

@end
