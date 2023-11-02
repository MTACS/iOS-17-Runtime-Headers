
@interface TUNearbySuggestion : NSObject <NSSecureCoding> {
    TUConversationActivity * _activity;
    TUNearbyDeviceHandle * _deviceHandle;
    NSUUID * _identifier;
    long long  _type;
}

@property (nonatomic, readonly) TUConversationActivity *activity;
@property (nonatomic, readonly) TUNearbyDeviceHandle *deviceHandle;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (id)description;
- (id)deviceHandle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 deviceHandle:(id)arg2 activity:(id)arg3 type:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSuggestion:(id)arg1;
- (bool)isEquivalentToSuggestion:(id)arg1;
- (long long)type;

@end
