
@interface NUContentOverlayDocumentSectionBlueprintData : NSObject {
    SXDocumentSectionBlueprint * _blueprint;
    double  _topOffset;
}

@property (nonatomic, readonly) SXDocumentSectionBlueprint *blueprint;
@property (nonatomic, readonly) double topOffset;

- (void).cxx_destruct;
- (id)blueprint;
- (id)initWithBlueprint:(id)arg1 topOffset:(double)arg2;
- (double)topOffset;

@end
