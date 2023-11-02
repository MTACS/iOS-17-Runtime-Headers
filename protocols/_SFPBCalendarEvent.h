
@protocol _SFPBCalendarEvent <NSObject>

@required

- (_SFPBDate *)endDate;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isAllDay;
- (NSData *)jsonData;
- (_SFPBStructuredLocation *)location;
- (NSString *)notes;
- (void)setEndDate:(_SFPBDate *)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setLocation:(_SFPBStructuredLocation *)arg1;
- (void)setNotes:(NSString *)arg1;
- (void)setStartDate:(_SFPBDate *)arg1;
- (void)setTitle:(NSString *)arg1;
- (_SFPBDate *)startDate;
- (NSString *)title;

@end
