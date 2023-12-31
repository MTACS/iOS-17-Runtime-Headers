
@interface MFMailAccountProxy : NSObject {
    NSDictionary * _properties;
}

@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSString *firstEmailAddress;
@property (nonatomic, readonly) NSArray *fromEmailAddresses;
@property (nonatomic, readonly) NSArray *fromEmailAddressesIncludingDisabled;
@property (nonatomic, readonly) NSString *fullUserName;
@property (nonatomic, readonly) bool isDefaultDeliveryAccount;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly) id mailAccount;
@property (nonatomic, readonly) bool restrictsRepliesAndForwards;
@property (nonatomic, readonly) bool supportsMailDrop;
@property (nonatomic, readonly) bool supportsThreadOperations;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *username;

+ (id)log;

- (void).cxx_destruct;
- (id)_emailAddressesAndAliases;
- (id)_initWithProperties:(id)arg1;
- (bool)_isActive;
- (bool)_isRestricted;
- (id)emailAddresses;
- (id)firstEmailAddress;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (id)fullUserName;
- (bool)isDefaultDeliveryAccount;
- (bool)isManaged;
- (id)mailAccount;
- (bool)restrictsRepliesAndForwards;
- (bool)supportsMailDrop;
- (bool)supportsThreadOperations;
- (id)uniqueID;
- (id)username;

@end
