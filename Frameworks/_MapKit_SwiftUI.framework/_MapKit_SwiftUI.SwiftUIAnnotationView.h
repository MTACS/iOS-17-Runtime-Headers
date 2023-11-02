
@interface _MapKit_SwiftUI.SwiftUIAnnotationView : MKAnnotationView {
    void contentAnchorPoint;
    void hostView;
    void wrappedView;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;

+ (bool)_wantsViewBasedPositioning;

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;

@end
