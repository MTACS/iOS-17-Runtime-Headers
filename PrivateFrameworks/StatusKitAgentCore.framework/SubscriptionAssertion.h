
@interface SubscriptionAssertion : NSManagedObject

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) NSString *statusTypeIdentifier;

+ (id)applicationIdentifierKeyPath;
+ (id)channelIdentifierKeyPath;
+ (id)fetchRequest;
+ (id)predicateForApplicationIdentifier:(id)arg1;
+ (id)predicateForChannelIdentifier:(id)arg1;
+ (id)predicateForStatusTypeIdentifier:(id)arg1;
+ (id)statusTypeIdentifierKeyPath;

@end
