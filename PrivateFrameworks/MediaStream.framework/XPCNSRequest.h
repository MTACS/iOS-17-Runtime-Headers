
@interface XPCNSRequest : NSObject {
    NSData * _data;
    <NSCoding> * _message;
    XPCRequest * _request;
}

@property (nonatomic, readonly, retain) NSData *data;
@property (nonatomic, readonly, retain) <NSCoding> *message;
@property (nonatomic, readonly, retain) XPCRequest *request;

- (void).cxx_destruct;
- (id)data;
- (id)initWithXPCRequest:(id)arg1;
- (id)message;
- (id)request;
- (void)sendReply:(id)arg1;

@end
