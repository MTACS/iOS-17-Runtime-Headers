
@interface PKDataDetectorQueryItem : PKDetectionQueryItem {
    CHDataDetectorQueryItem * _coreHandwritingDataDetectorQueryItem;
}

@property (nonatomic, retain) CHDataDetectorQueryItem *coreHandwritingDataDetectorQueryItem;
@property (nonatomic, readonly) DDScannerResult *scannerResult;

- (void).cxx_destruct;
- (id)baselinePath;
- (id)coreHandwritingDataDetectorQueryItem;
- (id)initWithCoreHandwritingDataDetectorQueryItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)scannerResult;
- (void)setCoreHandwritingDataDetectorQueryItem:(id)arg1;
- (id)strokeIdentifiers;

@end
