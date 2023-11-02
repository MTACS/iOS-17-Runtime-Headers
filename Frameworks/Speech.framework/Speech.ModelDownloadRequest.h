
@interface Speech.ModelDownloadRequest : NSObject <NSProgressReporting> {
    void clientID;
    void locales;
    void progress;
}

@property (nonatomic, readonly) NSProgress *progress;

- (void).cxx_destruct;
- (void)downloadWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)progress;

@end
