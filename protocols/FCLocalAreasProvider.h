
@protocol FCLocalAreasProvider <NSObject>

@required

- (NSArray *)areasForLocation:(CLLocation *)arg1;
- (NSSet *)autoFavoriteTagIDsForLocation:(CLLocation *)arg1;
- (NSArray *)regionsForLocation:(CLLocation *)arg1;

@end
