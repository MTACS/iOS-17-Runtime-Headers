
@interface _RMSMessageRecord : NSObject {
    unsigned short  _messageType;
    id  _responseBlock;
}

@property (nonatomic) unsigned short messageType;
@property (nonatomic, retain) id responseBlock;

- (void).cxx_destruct;
- (unsigned short)messageType;
- (id)responseBlock;
- (void)setMessageType:(unsigned short)arg1;
- (void)setResponseBlock:(id)arg1;

@end
