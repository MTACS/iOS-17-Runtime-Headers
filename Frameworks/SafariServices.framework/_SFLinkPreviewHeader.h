
@interface _SFLinkPreviewHeader : UIView <SFLinkPreviewHeaderContentViewDelegate, _SFFluidProgressViewDelegate> {
    SFLinkPreviewHeaderContentView * _contentView;
    <_SFLinkPreviewHeaderDelegate> * _delegate;
    NSString * _domain;
    UIView * _hairline;
    bool  _isMinimumPreviewUI;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastLayoutBounds;
    _SFFluidProgressView * _progressView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFLinkPreviewHeaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (getter=isLinkPreviewEnabled, nonatomic) bool linkPreviewEnabled;
@property (nonatomic, retain) _SFFluidProgressView *progressView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)defaultHeight;
- (id)delegate;
- (id)domain;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (id)initWithMinimumPreviewUI:(bool)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLinkPreviewEnabled;
- (void)layoutSubviews;
- (bool)linkPreviewEnabled;
- (void)linkPreviewHeaderContentView:(id)arg1 didEnableLinkPreview:(bool)arg2;
- (id)progressView;
- (void)setDelegate:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setLinkPreviewEnabled:(bool)arg1;
- (void)setProgressView:(id)arg1;

@end
