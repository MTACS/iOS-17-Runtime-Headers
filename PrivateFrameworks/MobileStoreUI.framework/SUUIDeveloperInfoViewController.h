
@interface SUUIDeveloperInfoViewController : SUUIViewController {
    SUUIDeveloperInfo * _developerInfo;
    SUUIDeveloperInfoView * _infoView;
    UIScrollView * _scrollView;
}

@property (nonatomic, readonly) SUUIDeveloperInfo *developerInfo;

- (void).cxx_destruct;
- (id)developerInfo;
- (id)initWithDeveloperInfo:(id)arg1;
- (void)loadView;

@end
