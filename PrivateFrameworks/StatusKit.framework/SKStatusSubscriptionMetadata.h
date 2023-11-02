
@interface SKStatusSubscriptionMetadata : NSObject <NSSecureCoding> {
    SKPublishedStatus * _currentStatus;
    NSArray * _ownerHandles;
    bool  _personalStatusSubscription;
    NSString * _statusTypeIdentifier;
    NSString * _subscriptionIdentifier;
}

@property (nonatomic, readonly) SKPublishedStatus *currentStatus;
@property (nonatomic, readonly) NSArray *ownerHandles;
@property (getter=isPersonalStatusSubscription, nonatomic, readonly) bool personalStatusSubscription;
@property (nonatomic, readonly) NSString *statusTypeIdentifier;
@property (nonatomic, readonly) NSString *subscriptionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentStatus;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 isPersonalStatusSubscription:(bool)arg3 currentStatus:(id)arg4 ownerHandles:(id)arg5;
- (bool)isPersonalStatusSubscription;
- (id)ownerHandles;
- (id)statusTypeIdentifier;
- (id)subscriptionIdentifier;

@end
