
@interface SAStockRequest : SADomainObject

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *requestType;
@property (nonatomic, copy) NSDate *startDate;

+ (id)request;
+ (id)requestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endDate;
- (id)groupIdentifier;
- (id)requestType;
- (void)setEndDate:(id)arg1;
- (void)setRequestType:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
