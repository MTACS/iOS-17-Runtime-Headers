
@interface CRParagraphOutputRegionGeometryInfo : CROutputRegionGeometryInfo {
    CROutputRegionGeometryInfo * _firstLine;
    bool  _isCenterJustified;
    bool  _isLeftJustified;
    bool  _isRightJustified;
    CROutputRegionGeometryInfo * _lastLine;
}

@property (readonly) CROutputRegionGeometryInfo *firstLine;
@property (readonly) bool isCenterJustified;
@property (readonly) bool isLeftJustified;
@property (readonly) bool isRightJustified;
@property (readonly) CROutputRegionGeometryInfo *lastLine;

- (void).cxx_destruct;
- (id)firstLine;
- (id)initFromParagraphOutputRegion:(id)arg1;
- (bool)isCenterJustified;
- (bool)isLeftJustified;
- (bool)isRightJustified;
- (id)lastLine;

@end
