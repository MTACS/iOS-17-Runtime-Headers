
@interface RankingInfo : NSManagedObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic) short inputMethod;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *rankedList;
@property (nonatomic, copy) NSString *recipientId;
@property (nonatomic, copy) NSString *response;
@property (nonatomic) short source;
@property (nonatomic, copy) NSDate *timestamp;

+ (id)fetchRequest;

@end
