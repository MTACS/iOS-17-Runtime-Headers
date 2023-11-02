
@interface VIImageRegionDomainInfo : NSObject <NSCopying> {
    bool  _barcodeResultsRequired;
    NSString * _displayLabel;
    NSString * _displayMessage;
    NSString * _domainKey;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focalPoint;
    NSString * _glyphName;
    bool  _hasFocalPoint;
    bool  _isCornerGlyph;
    bool  _isLowConfidence;
    NSString * _labelName;
    bool  _ocrResultsRequired;
    bool  _shouldShowDynamicGlyph;
}

@property (nonatomic, readonly) bool barcodeResultsRequired;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *displayMessage;
@property (nonatomic, readonly) NSString *domainKey;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } focalPoint;
@property (nonatomic, readonly) NSString *glyphName;
@property (nonatomic, readonly) bool hasFocalPoint;
@property (nonatomic, readonly) bool isCornerGlyph;
@property (nonatomic, readonly) bool isLowConfidence;
@property (nonatomic, readonly) NSString *labelName;
@property (nonatomic, readonly) bool ocrResultsRequired;
@property (nonatomic, readonly) bool shouldShowDynamicGlyph;

- (void).cxx_destruct;
- (bool)barcodeResultsRequired;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayLabel;
- (id)displayMessage;
- (id)domainKey;
- (struct CGPoint { double x1; double x2; })focalPoint;
- (id)glyphName;
- (bool)hasFocalPoint;
- (id)initWithDomainKey:(id)arg1 labelName:(id)arg2 glyphName:(id)arg3 displayLabel:(id)arg4 displayMessage:(id)arg5 hasFocalPoint:(bool)arg6 focalPoint:(struct CGPoint { double x1; double x2; })arg7 isCornerGlyph:(bool)arg8 ocrResultsRequired:(bool)arg9 barcodeResultsRequired:(bool)arg10 isLowConfidence:(bool)arg11 shouldShowDynamicGlyph:(bool)arg12;
- (bool)isCornerGlyph;
- (bool)isEqual:(id)arg1;
- (bool)isLowConfidence;
- (id)labelName;
- (bool)ocrResultsRequired;
- (bool)shouldShowDynamicGlyph;

@end
