
@interface SNCopyFilesRequest : NSObject <SNRequest> {
    void localDestinationPath;
    void serverBasePath;
    void serverFilePaths;
    void serverInfo;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithServerInfo:(id)arg1 serverBasePath:(id)arg2 serverFilePaths:(id)arg3 localDestinationPath:(id)arg4;

@end
