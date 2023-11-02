
@interface CHDataDetectorQueryItem : NSObject {
    DDScannerResult * _dataDetectorResult;
    struct CGPath { } * _estimatedBaseline;
    NSSet * _strokeIdentifiers;
}

@property (nonatomic, readonly) DDScannerResult *dataDetectorResult;
@property (nonatomic, readonly) struct CGPath { }*estimatedBaseline;
@property (nonatomic, readonly, copy) NSSet *strokeIdentifiers;

- (void).cxx_destruct;
- (id)dataDetectorResult;
- (void)dealloc;
- (id)description;
- (struct CGPath { }*)estimatedBaseline;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDataDetectorQueryItem:(id)arg1;
- (id)strokeIdentifiers;

@end
