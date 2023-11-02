
@interface ChannelCheckpoint : NSManagedObject

@property (nonatomic, copy) NSString *channelID;
@property (nonatomic) long long checkpoint;

+ (id)fetchRequest;
+ (id)identifierKeyPath;
+ (id)predicateForChannelIdentifier:(id)arg1;

@end
