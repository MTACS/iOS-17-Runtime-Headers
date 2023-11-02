
@interface SYMessageStatusRecord : NSObject {
    bool  _applicationACKReceived;
    bool  _deviceACKReceived;
    NSString * _messageID;
    bool  _responseReceived;
}

@property (nonatomic) bool applicationACKReceived;
@property (nonatomic) bool deviceACKReceived;
@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, copy) NSString *messageID;
@property (nonatomic) bool responseReceived;

- (void).cxx_destruct;
- (bool)applicationACKReceived;
- (id)debugDescription;
- (id)description;
- (bool)deviceACKReceived;
- (id)initFiller;
- (id)initWithMessageID:(id)arg1;
- (bool)isComplete;
- (id)messageID;
- (bool)responseReceived;
- (void)setApplicationACKReceived:(bool)arg1;
- (void)setDeviceACKReceived:(bool)arg1;
- (void)setMessageID:(id)arg1;
- (void)setResponseReceived:(bool)arg1;

@end