
@interface _TtC12PhotosUICoreP33_E758434BD084CAD7BAF751273E20B07524EditSCAPReviewDetailView : UIView <PEResourceLoaderDelegate> {
    void asset;
    void preset;
    void resourceLoader;
    void tungstenView;
    void viewModel;
    void viewingMode;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)resourceLoader:(id)arg1 request:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)resourceLoader:(id)arg1 request:(id)arg2 downloadProgress:(double)arg3;
- (void)resourceLoader:(id)arg1 request:(id)arg2 mediaLoadDidFailWithError:(id)arg3;

@end
