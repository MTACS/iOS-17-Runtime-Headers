
@interface GTCaptureConfiguration : NSObject <NSSecureCoding> {
    bool  _disableHashResources;
    bool  _enableLogErrors;
    bool  _enablePresentDownload;
    unsigned int  _maxDownloadCommandBuffers;
    unsigned int  _waitEventTimeout;
}

@property (nonatomic) bool disableHashResources;
@property (nonatomic) bool enableLogErrors;
@property (nonatomic) bool enablePresentDownload;
@property (nonatomic) unsigned int maxDownloadCommandBuffers;
@property (nonatomic) unsigned int waitEventTimeout;

+ (bool)supportsSecureCoding;

- (bool)disableHashResources;
- (bool)enableLogErrors;
- (bool)enablePresentDownload;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)maxDownloadCommandBuffers;
- (void)setDisableHashResources:(bool)arg1;
- (void)setEnableLogErrors:(bool)arg1;
- (void)setEnablePresentDownload:(bool)arg1;
- (void)setMaxDownloadCommandBuffers:(unsigned int)arg1;
- (void)setWaitEventTimeout:(unsigned int)arg1;
- (unsigned int)waitEventTimeout;

@end
