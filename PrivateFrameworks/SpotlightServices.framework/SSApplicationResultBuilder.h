
@interface SSApplicationResultBuilder : SSResultBuilder {
    NSURL * _appURL;
    NSString * _bundleId;
    NSString * _name;
}

@property (nonatomic, retain) NSURL *appURL;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *name;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)appURL;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)bundleId;
- (id)initWithResult:(id)arg1;
- (id)name;
- (void)setAppURL:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setName:(id)arg1;

@end
