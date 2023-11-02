
@interface VKCBaseDataDetectorElement : VKCBaseElement <VKAnalysisElementDebugMenuProvider> {
    double  _area;
    NSDictionary * _groupedElementData;
    double  _maxLineHeight;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) double area;
@property (nonatomic, readonly) NSArray *boundingQuads;
@property (nonatomic, readonly) unsigned long long dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIMenu *debugMenu;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *groupedElementData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMRCDataDetector;
@property (nonatomic, readonly) bool isTextDataDetector;
@property (nonatomic, readonly) bool isUnitConversionDataDetector;
@property (nonatomic, readonly) double maxLineHeight;
@property (nonatomic, readonly) DDScannerResult *scannerResult;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, readonly) bool wantsMacOSHandCursor;

+ (unsigned long long)dataDetectorTypesForScannerResult:(id)arg1;
+ (id)stringArrayForVKDataDetectorTypes:(unsigned long long)arg1;

- (void).cxx_destruct;
- (double)area;
- (id)boundingQuads;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)dataDetectorTypes;
- (id)debugMenu;
- (long long)elementType;
- (id)groupedElementData;
- (id)init;
- (bool)isInspectableCellSelectable;
- (bool)isMRCDataDetector;
- (bool)isTextDataDetector;
- (bool)isUnitConversionDataDetector;
- (double)maxLineHeight;
- (id)scannerResult;
- (void)setGroupedElementData:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)stringValue;
- (id)uuid;
- (bool)wantsMacOSHandCursor;

@end
