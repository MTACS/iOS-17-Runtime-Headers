
@interface UIUnderstanding.TwinEmbeddingTransformerSquareInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void padding_mask;
    void screen_label;
    void screen_pos;
    void screen_rcnn;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
