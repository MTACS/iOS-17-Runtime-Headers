
@interface SXTextTangierAttachmentLayout : TSDDrawableLayout {
    TSDWrapPolygon * _polygon;
}

@property (nonatomic, retain) TSDWrapPolygon *polygon;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (void)fixTransformFromInterimPosition;
- (id)polygon;
- (void)setPolygon:(id)arg1;
- (void)storeActualPosition;
- (void)validate;
- (id)wrapPolygon;

@end
