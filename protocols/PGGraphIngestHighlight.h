
@protocol PGGraphIngestHighlight <NSObject>

@required

- (NSDate *)endDate;
- (NSDate *)localEndDate;
- (NSDate *)localStartDate;
- (unsigned short)sharingComposition;
- (NSDate *)startDate;
- (unsigned short)type;
- (NSString *)uuid;

@end
