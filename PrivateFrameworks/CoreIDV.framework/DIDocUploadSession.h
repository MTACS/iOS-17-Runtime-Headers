
@interface DIDocUploadSession : NSObject {
    DIDocUploadSessionClient * _client;
}

@property (nonatomic, retain) DIDocUploadSessionClient *client;

- (void).cxx_destruct;
- (void)cancelUploads;
- (id)client;
- (id)init;
- (void)setClient:(id)arg1;
- (void)uploadDocData:(id)arg1 uploadSettings:(id)arg2 completion:(id /* block */)arg3;

@end
