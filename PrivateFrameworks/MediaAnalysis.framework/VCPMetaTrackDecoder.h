
@interface VCPMetaTrackDecoder : NSObject {
    AVAssetReader * _reader;
    AVAssetReaderTrackOutput * _readerOutput;
    AVAssetReaderOutputMetadataAdaptor * _readerOutputAdaptor;
}

- (void).cxx_destruct;
- (id)copyNextMetadataGroup;
- (void)dealloc;
- (id)initWithTrack:(id)arg1;
- (long long)status;

@end
