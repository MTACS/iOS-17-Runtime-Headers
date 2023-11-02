
@interface VKCTextDataDetectorElement : VKCBaseDataDetectorElement {
    NSArray * __children;
    NSArray * _boundingQuads;
    bool  _childrenCreated;
    unsigned long long  _crDataType;
    unsigned long long  _dataDetectorTypes;
    DDScannerResult * _scannerResult;
}

@property (nonatomic, copy) NSArray *_children;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (nonatomic) bool childrenCreated;
@property (nonatomic, readonly) unsigned long long crDataType;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic, readonly) CRDataDetectorsOutputRegion *ddOutputRegion;

+ (id)dataDetectorElementFromCROutputRegion:(id)arg1 parentDocument:(id)arg2;

- (void).cxx_destruct;
- (id)_children;
- (id)boundingQuads;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (id)children;
- (bool)childrenCreated;
- (unsigned long long)crDataType;
- (void)createChildrenIfNecessary;
- (unsigned long long)dataDetectorTypes;
- (unsigned long long)dataType;
- (id)ddOutputRegion;
- (id)debugMenu;
- (id)initWithCROutputRegion:(id)arg1 parentDocument:(id)arg2;
- (id)initWithScannerResult:(id)arg1;
- (bool)isTextDataDetector;
- (bool)isUnitConversionDataDetector;
- (id)scannerResult;
- (void)setChildrenCreated:(bool)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)set_children:(id)arg1;

@end
