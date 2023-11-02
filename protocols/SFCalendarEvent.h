
@protocol SFCalendarEvent <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSDate *)endDate;
- (bool)isAllDay;
- (NSData *)jsonData;
- (SFStructuredLocation *)location;
- (NSString *)notes;
- (void)setEndDate:(NSDate *)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setLocation:(SFStructuredLocation *)arg1;
- (void)setNotes:(NSString *)arg1;
- (void)setStartDate:(NSDate *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSDate *)startDate;
- (NSString *)title;

@end
