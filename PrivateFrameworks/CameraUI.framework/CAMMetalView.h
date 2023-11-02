
@interface CAMMetalView : UIView {
    <CAMMetalViewDelegate> * _metalViewDelegate;
}

@property (nonatomic, readonly) CAMetalLayer *metalLayer;
@property (nonatomic, retain) <CAMMetalViewDelegate> *metalViewDelegate;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)metalLayer;
- (id)metalViewDelegate;
- (void)setMetalViewDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
