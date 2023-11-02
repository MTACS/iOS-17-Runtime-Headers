
@interface GEOLabelGeometry : NSObject {
    bool  _hasSelectionPolygon;
    NSArray * _labelShape;
}

@property (nonatomic, readonly) bool hasSelectionPolygon;
@property (nonatomic, readonly) NSArray *labelShape;

- (void).cxx_destruct;
- (bool)hasSelectionPolygon;
- (id)initWithGEOPDLabelGeometry:(id)arg1;
- (id)initWithLabelShape:(id)arg1 hasSelectionPolygon:(bool)arg2;
- (id)labelShape;

@end
