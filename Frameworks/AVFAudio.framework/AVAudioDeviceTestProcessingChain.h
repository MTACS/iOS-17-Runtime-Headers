
@interface AVAudioDeviceTestProcessingChain : NSObject <NSSecureCoding> {
    NSURL * _graphURL;
    NSURL * _processingStripURL;
}

@property (nonatomic, retain) NSURL *graphURL;
@property (nonatomic, retain) NSURL *processingStripURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)graphURL;
- (id)initWithCoder:(id)arg1;
- (id)processingStripURL;
- (void)setGraphURL:(id)arg1;
- (void)setProcessingStripURL:(id)arg1;

@end
