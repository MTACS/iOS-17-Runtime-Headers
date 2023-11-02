
@interface RKRankingInfo : NSManagedObject

@property (nonatomic, retain) NSString *category;
@property (nonatomic) unsigned long long inputMethod;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *rankedList;
@property (nonatomic, retain) NSString *recipientId;
@property (nonatomic, retain) NSString *response;
@property (nonatomic) long long responseId;
@property (nonatomic) unsigned long long source;
@property (nonatomic, retain) NSDate *timestamp;

@end
