
@interface RBSXPCMessageReply : NSObject {
    RBSXPCMessageContext * _context;
    RBSXPCCoder * _payload;
    bool  _sent;
}

@property (nonatomic, readonly) <RBSXPCEncoding><RBSXPCDecoding> *payload;

- (void).cxx_destruct;
- (id)payload;
- (void)prepareForHandoff;
- (void)send;

@end
