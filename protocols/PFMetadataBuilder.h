
@protocol PFMetadataBuilder <NSObject>

@required

- (NSString *)accessibilityDescription;
- (NSString *)caption;
- (NSDate *)creationDate;
- (NSTimeZone *)creationTimeZone;
- (NSArray *)keywords;
- (CLLocation *)location;
- (NSArray *)peopleNames;
- (void)setAccessibilityDescription:(NSString *)arg1;
- (void)setCaption:(NSString *)arg1;
- (void)setCreationDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2;
- (void)setKeywords:(NSArray *)arg1;
- (void)setLocation:(CLLocation *)arg1;
- (void)setPeopleNames:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
