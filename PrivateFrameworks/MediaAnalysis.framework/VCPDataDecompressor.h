
@interface VCPDataDecompressor : NSObject {
    NSMutableData * _resultData;
    NSMutableData * _scratchData;
}

+ (id)decompressor;

- (void).cxx_destruct;
- (id)decompressData:(id)arg1;
- (id)init;

@end
