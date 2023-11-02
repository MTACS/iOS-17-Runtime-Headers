
@interface TransientSubscriptionHistory : NSManagedObject

@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) NSDate *lastSubscriptionDate;

+ (id)channelIdentifierKeyPath;
+ (id)fetchRequest;
+ (id)lastSubscriptionDateKeyPath;
+ (id)predicateForChannelIdentifier:(id)arg1;
+ (id)predicateForLastSubscriptionDate:(id)arg1;
+ (id)sortDescriptorForLastSubscriptionDateAscending:(bool)arg1;

@end
