
@interface vtSafeArray : NSObject {
    unsigned short  _cDims;
    unsigned int  _cbElementSize;
    unsigned short  _fFeatures;
    safeArrayBound * _rgsBoundArr;
    NSArray * _vData;
}

@property unsigned short cDims;
@property unsigned int cbElementSize;
@property unsigned short fFeatures;
@property (retain) safeArrayBound *rgsBoundArr;
@property (retain) NSArray *vData;

- (void).cxx_destruct;
- (unsigned short)cDims;
- (unsigned int)cbElementSize;
- (unsigned short)fFeatures;
- (id)initWithArray:(id)arg1 ElementSize:(unsigned int)arg2;
- (id)rgsBoundArr;
- (void)setCDims:(unsigned short)arg1;
- (void)setCbElementSize:(unsigned int)arg1;
- (void)setFFeatures:(unsigned short)arg1;
- (void)setRgsBoundArr:(id)arg1;
- (void)setVData:(id)arg1;
- (id)vData;

@end
