
@interface SFAppLinkBanner : SFLinkBanner {
    WBSAppLink * _appLink;
}

@property (nonatomic, readonly) WBSAppLink *appLink;

- (void).cxx_destruct;
- (id)appLink;
- (id)initWithAppLink:(id)arg1 openActionHandler:(id /* block */)arg2;

@end
