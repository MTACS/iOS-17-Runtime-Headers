
@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController {
    bool  _embedded;
    IKViewElement * _viewElement;
}

@property (nonatomic) bool embedded;
@property (nonatomic, readonly) bool matchParentHeight;
@property (nonatomic, readonly) long long preferredLayoutAttribute;
@property (nonatomic, readonly) id preferredLayoutGuide;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (bool)embedded;
- (id)initWithViewElement:(id)arg1;
- (bool)matchParentHeight;
- (long long)preferredLayoutAttribute;
- (id)preferredLayoutGuide;
- (void)setEmbedded:(bool)arg1;
- (void)setViewElement:(id)arg1;
- (void)viewDidLoad;
- (id)viewElement;

@end
