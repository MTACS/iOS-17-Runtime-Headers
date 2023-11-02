
@interface TUSplitSessionInfo : NSObject <NSSecureCoding> {
    NSUUID * _conversationID;
    TUNearbyDeviceHandle * _device;
    TUNeighborhoodHandoffContext * _handoffContext;
}

@property (nonatomic, readonly) NSUUID *conversationID;
@property (nonatomic, readonly) TUNearbyDeviceHandle *device;
@property (nonatomic, readonly) TUNeighborhoodHandoffContext *handoffContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationID;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffContext;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationID:(id)arg1 device:(id)arg2 handoffContext:(id)arg3;

@end
