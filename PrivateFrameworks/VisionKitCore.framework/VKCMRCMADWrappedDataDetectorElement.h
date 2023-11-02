
@interface VKCMRCMADWrappedDataDetectorElement : VKCMRCDataDetectorElement <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSArray * _boundingQuads;
    unsigned long long  _dataDetectorTypes;
    VKQuad * _quad;
    DDScannerResult * _scannerResult;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic, retain) VKQuad *quad;
@property (nonatomic, retain) DDScannerResult *scannerResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)boundingQuads;
- (unsigned long long)dataDetectorTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMADMRCResultItem:(id)arg1 scannerResult:(id)arg2;
- (id)initWithScannerResult:(id)arg1 quad:(id)arg2;
- (id)quad;
- (id)scannerResult;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setQuad:(id)arg1;
- (void)setScannerResult:(id)arg1;

@end
