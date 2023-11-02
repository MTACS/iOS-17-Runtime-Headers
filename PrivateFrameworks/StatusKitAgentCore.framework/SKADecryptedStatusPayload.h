
@interface SKADecryptedStatusPayload : NSObject {
    SKADatabaseReceivedInvitation * _invitation;
    SKStatusPayload * _statusPayload;
}

@property (nonatomic, readonly) SKADatabaseReceivedInvitation *invitation;
@property (nonatomic, readonly) SKStatusPayload *statusPayload;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatusPayload:(id)arg1 invitation:(id)arg2;
- (id)invitation;
- (id)statusPayload;

@end
