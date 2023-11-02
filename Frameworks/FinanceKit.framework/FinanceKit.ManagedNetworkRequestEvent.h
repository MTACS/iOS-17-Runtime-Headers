
@interface FinanceKit.ManagedNetworkRequestEvent : NSManagedObject

@property (nonatomic, copy) NSDate *eventDate;
@property (nonatomic, copy) NSURL *eventURL;
@property (nonatomic, copy) NSData *requestBody;
@property (nonatomic, copy) NSString *requestHeaders;
@property (nonatomic, copy) NSString *requestMethod;
@property (nonatomic, copy) NSUUID *traceID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
