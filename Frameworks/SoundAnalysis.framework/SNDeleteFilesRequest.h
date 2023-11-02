
@interface SNDeleteFilesRequest : NSObject <SNRequest> {
    void files;
    void serverBasePath;
    void serverInfo;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFiles:(id)arg1 serverBasePath:(id)arg2 serverInfo:(id)arg3;

@end
