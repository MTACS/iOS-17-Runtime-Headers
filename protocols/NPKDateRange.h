
@protocol NPKDateRange <NSObject>

@required

- (NSDate *)expiryDate;
- (NSString *)expiryDateString;
- (NSDate *)startDate;
- (NSString *)startDateString;

@end
