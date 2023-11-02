
@interface BodyWriter : NSObject {
    unsigned long long  _bytesLeftToPost;
    NSObject<OS_nw_connection> * _connection;
    NSObject<OS_dispatch_data> * _postData;
    unsigned int  _postWriteSize;
    unsigned int  _totalExpectedBytes;
}

@property (nonatomic) unsigned long long bytesLeftToPost;
@property (nonatomic, retain) NSObject<OS_nw_connection> *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_data> *postData;
@property (nonatomic) unsigned int postWriteSize;
@property (nonatomic) unsigned int totalExpectedBytes;

- (void).cxx_destruct;
- (unsigned long long)bytesLeftToPost;
- (id)connection;
- (id)postData;
- (unsigned int)postWriteSize;
- (void)sendBodyDataWithContext:(id)arg1;
- (void)setBytesLeftToPost:(unsigned long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setPostData:(id)arg1;
- (void)setPostWriteSize:(unsigned int)arg1;
- (void)setTotalExpectedBytes:(unsigned int)arg1;
- (unsigned int)totalExpectedBytes;

@end
