
@interface SSPhotosFromAppSectionBuilder : SSPhotosSectionBuilder {
    NSString * _appBundleId;
}

@property (nonatomic, retain) NSString *appBundleId;

+ (id)supportedBundleIds;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)buildButtonItem;
- (id)buildTitle;
- (long long)maxCardSections;
- (void)setAppBundleId:(id)arg1;
- (void)setSection:(id)arg1;

@end
