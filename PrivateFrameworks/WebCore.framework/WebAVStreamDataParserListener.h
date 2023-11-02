
@interface WebAVStreamDataParserListener : NSObject <AVStreamDataParserOutputHandling> {
    void * _parent;
    AVStreamDataParser * _parser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property void*parent;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithParser:(id)arg1 parent:(void*)arg2;
- (void)invalidate;
- (void*)parent;
- (void)setParent:(void*)arg1;
- (void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2;
- (void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2;
- (void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(bool)arg3;
- (void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3;
- (void)streamDataParser:(id)arg1 didProvideMediaData:(struct opaqueCMSampleBuffer { }*)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5;
- (void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2;

@end
