
@interface AVCMomentsRequest : NSObject {
    NSObject<AVCMediaRecorderRequestDelegate> * _delegate;
    unsigned char  _mediaType;
    unsigned char  _mode;
    NSString * _requesteeID;
    NSString * _requesterID;
    NSString * _transactionID;
}

@property (nonatomic) NSObject<AVCMediaRecorderRequestDelegate> *delegate;
@property (nonatomic, readonly) unsigned char mediaType;
@property (nonatomic) unsigned char mode;
@property (nonatomic, readonly) NSString *requesteeID;
@property (nonatomic, readonly) NSString *requesterID;
@property (nonatomic, readonly) NSString *transactionID;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)endWithError:(id*)arg1;
- (id)initWithMediaType:(unsigned char)arg1 requesterID:(id)arg2 requesteeID:(id)arg3;
- (id)initWithMediaType:(unsigned char)arg1 requesterID:(id)arg2 requesteeID:(id)arg3 transactionID:(id)arg4;
- (unsigned char)mediaType;
- (unsigned char)mode;
- (bool)rejectWithError:(id*)arg1;
- (id)requesteeID;
- (id)requesterID;
- (void)setDelegate:(id)arg1;
- (void)setMode:(unsigned char)arg1;
- (bool)startWithError:(id*)arg1;
- (id)transactionID;
- (bool)validateWithError:(id*)arg1;

@end
