
@interface FinanceKit.ManagedNetworkResponseEvent : NSManagedObject

@property (nonatomic, copy) NSDate *eventDate;
@property (nonatomic, copy) NSURL *eventURL;
@property (nonatomic, copy) NSData *responseBody;
@property (nonatomic, copy) NSString *responseHeaders;
@property (nonatomic) short responseStatusCode;
@property (nonatomic, copy) NSUUID *traceID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
