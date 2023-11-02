
@interface BCSNFCReaderURLRecord : NSObject {
    <NFNdefMessage> * _message;
    NSURL * _url;
}

@property (nonatomic, readonly) <NFNdefMessage> *message;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 message:(id)arg2;
- (id)message;
- (id)url;

@end
