
@interface WebAVAssetWriterDelegate : NSObject <AVAssetWriterDelegate> {
    void * m_writer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)assetWriter:(id)arg1 didProduceFragmentedHeaderData:(id)arg2;
- (void)assetWriter:(id)arg1 didProduceFragmentedMediaData:(id)arg2 fragmentedMediaDataReport:(id)arg3;
- (void)close;
- (id)initWithWriter:(void*)arg1;

@end
