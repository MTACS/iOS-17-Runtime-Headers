
@interface MTLegacyDownloadListener : NSObject {
    <MTLegacyDownloadManagerDelegate> * _delegate;
}

@property (nonatomic, readonly) <MTLegacyDownloadManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;

@end
