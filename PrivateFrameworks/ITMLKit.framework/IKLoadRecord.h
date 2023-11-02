
@interface IKLoadRecord : NSObject {
    NSURL * _URL;
    NSURLSessionDataTask * _dataTask;
    bool  _loadCompleted;
    ISURLOperation * _opertaion;
    NSUUID * _requestID;
    NSString * _scriptStr;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;
@property (nonatomic) bool loadCompleted;
@property (nonatomic, retain) ISURLOperation *opertaion;
@property (nonatomic, retain) NSUUID *requestID;
@property (nonatomic, retain) NSString *scriptStr;

- (void).cxx_destruct;
- (id)URL;
- (id)dataTask;
- (bool)loadCompleted;
- (id)opertaion;
- (id)requestID;
- (id)scriptStr;
- (void)setDataTask:(id)arg1;
- (void)setLoadCompleted:(bool)arg1;
- (void)setOpertaion:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setScriptStr:(id)arg1;
- (void)setURL:(id)arg1;

@end
