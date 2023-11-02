
@interface ATXBatteryDrainBehavior : NSObject

@property (nonatomic) unsigned long long lastCachedClassification;
@property (nonatomic, retain) NSDate *lastCachedDate;

+ (id)sharedInstance;

- (unsigned long long)fetchADBLDrainClassification;
- (unsigned long long)lastCachedClassification;
- (id)lastCachedDate;
- (void)setLastCachedClassification:(unsigned long long)arg1;
- (void)setLastCachedDate:(id)arg1;

@end
