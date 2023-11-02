
@protocol GEOTransitIncident <NSObject>

@required

- (NSArray *)affectedEntities;
- (NSDate *)creationDate;
- (NSDate *)endDate;
- (NSString *)fullDescription;
- (int)iconType;
- (bool)isBlockingIncident;
- (NSDate *)lastUpdated;
- (NSString *)messageForNonRoutable;
- (NSString *)messageForRoutePlanning;
- (NSString *)messageForRouteStepping;
- (unsigned long long)muid;
- (NSDate *)startDate;
- (NSString *)summary;
- (NSString *)title;

@end
