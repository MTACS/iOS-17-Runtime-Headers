
@interface CKOperationInMemoryAssetInfo : NSObject {
    NSMutableData * _assetContent;
    NSMutableIndexSet * _byteRanges;
}

@property (nonatomic, retain) NSMutableData *assetContent;
@property (nonatomic, retain) NSMutableIndexSet *byteRanges;

- (void).cxx_destruct;
- (id)assetContent;
- (id)assetContentWithExpectedSignature:(id)arg1 error:(id*)arg2;
- (id)byteRanges;
- (id)init;
- (bool)isContiguous;
- (void)setAssetContent:(id)arg1;
- (void)setByteRanges:(id)arg1;
- (void)writeData:(id)arg1 atOffset:(unsigned long long)arg2;

@end
