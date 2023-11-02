
@interface VCPDataCompressor : NSObject {
    NSMutableData * _resultData;
    NSMutableData * _scratchData;
}

+ (id)compressor;

- (void).cxx_destruct;
- (id)compressData:(id)arg1;
- (id)init;

@end
