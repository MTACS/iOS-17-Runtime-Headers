
@protocol GEOServiceGap <NSObject>

@required

- (<GEOServerFormattedString> *)displayMessagFormatString;
- (NSDate *)endDate;
- (unsigned long long)routeListInsertBeforeIndex;
- (NSDate *)startDate;

@end
