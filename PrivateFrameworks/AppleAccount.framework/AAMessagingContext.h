
@interface AAMessagingContext : NSObject {
    IDSMessageContext * _context;
    bool  _expectsPeerResponse;
    AAMessagingDestination * _fromID;
    NSString * _incomingResponseIdentifier;
    NSString * _outgoingResponseIdentifier;
    NSString * _senderCorrelationIdentifier;
    AAMessagingDestination * _toID;
}

@property (nonatomic, readonly) bool expectsPeerResponse;
@property (nonatomic, readonly) AAMessagingDestination *fromID;
@property (nonatomic, readonly) NSString *incomingResponseIdentifier;
@property (nonatomic, readonly) NSString *outgoingResponseIdentifier;
@property (nonatomic, readonly) NSString *senderCorrelationIdentifier;
@property (nonatomic, readonly) AAMessagingDestination *toID;

- (void).cxx_destruct;
- (bool)expectsPeerResponse;
- (id)fromID;
- (id)incomingResponseIdentifier;
- (id)initWithContext:(id)arg1;
- (id)outgoingResponseIdentifier;
- (id)senderCorrelationIdentifier;
- (id)toID;

@end
