
@protocol FHInsightProtocol <NSObject>

@required

- (long long)detectionType;
- (long long)direction;
- (NSDate *)endDate;
- (void)setDetectionType:(long long)arg1;
- (void)setDirection:(long long)arg1;
- (void)setEndDate:(NSDate *)arg1;
- (void)setStartDate:(NSDate *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setWindow:(long long)arg1;
- (void)setWindowReference:(unsigned long long)arg1;
- (NSDate *)startDate;
- (NSString *)type;
- (long long)window;
- (unsigned long long)windowReference;

@end
