
@interface SUUIDeveloperInfoView : UIView {
    SUUIClientContext * _clientContext;
    SUUIDeveloperInfo * _developerInfo;
    UIView * _infoSeparatorView;
    SUUIProductInformationView * _infoView;
    NSMutableArray * _lineViews;
}

@property (nonatomic, readonly) SUUIClientContext *clientContext;
@property (nonatomic, readonly) SUUIDeveloperInfo *developerInfo;

- (void).cxx_destruct;
- (id)clientContext;
- (id)developerInfo;
- (id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
