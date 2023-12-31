
@interface PXFeedLayoutGeneratorScanState : NSObject {
    long long  _scanLocation;
    long long  _scanSpecialSequenceCount;
    bool  _scannedBatchHasCaption;
    id  _scannedBatchID;
}

@property (nonatomic) long long scanLocation;
@property (nonatomic) long long scanSpecialSequenceCount;
@property (nonatomic) bool scannedBatchHasCaption;
@property (nonatomic, retain) id scannedBatchID;

- (void).cxx_destruct;
- (long long)scanLocation;
- (long long)scanSpecialSequenceCount;
- (bool)scannedBatchHasCaption;
- (id)scannedBatchID;
- (void)setScanLocation:(long long)arg1;
- (void)setScanSpecialSequenceCount:(long long)arg1;
- (void)setScannedBatchHasCaption:(bool)arg1;
- (void)setScannedBatchID:(id)arg1;

@end
