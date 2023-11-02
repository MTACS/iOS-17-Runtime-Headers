
@interface SKUIDeveloperInfoViewController : SKUIViewController {
    SKUIDeveloperInfo * _developerInfo;
    SKUIDeveloperInfoView * _infoView;
    UIScrollView * _scrollView;
}

@property (nonatomic, readonly) SKUIDeveloperInfo *developerInfo;

- (void).cxx_destruct;
- (id)developerInfo;
- (id)initWithDeveloperInfo:(id)arg1;
- (void)loadView;

@end
