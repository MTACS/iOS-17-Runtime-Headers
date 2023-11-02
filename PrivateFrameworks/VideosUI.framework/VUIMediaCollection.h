
@interface VUIMediaCollection : VUIMediaEntity

@property (nonatomic, readonly, copy) NSDate *addedToDate;
@property (nonatomic, readonly, copy) NSNumber *mediaItemCount;
@property (nonatomic, readonly, copy) NSNumber *seasonCount;

- (id)addedToDate;
- (id)description;
- (id)mediaItemCount;
- (id)seasonCount;

@end
