
@interface PGMicroPIPButtonView : UIView {
    PGLayerHostView * _layerHostView;
}

@property (nonatomic, retain) PGHostedWindowHostingHandle *hostedWindowHostingHandle;

+ (id)button;

- (void).cxx_destruct;
- (id)hostedWindowHostingHandle;
- (void)layoutSubviews;
- (void)setHostedWindowHostingHandle:(id)arg1;

@end
