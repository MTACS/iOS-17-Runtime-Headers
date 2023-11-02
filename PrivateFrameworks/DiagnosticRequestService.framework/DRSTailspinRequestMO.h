
@interface DRSTailspinRequestMO : DRSRequestMO

@property (nonatomic) bool includeOsLog;
@property (nonatomic) bool includeOsSignpost;
@property (nonatomic, copy) NSNumber *maxMAT;
@property (nonatomic, copy) NSNumber *minMAT;
@property (nonatomic) bool scrubbed;

+ (id)fetchRequest;

@end
