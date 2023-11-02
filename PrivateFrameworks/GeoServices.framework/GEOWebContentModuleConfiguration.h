
@interface GEOWebContentModuleConfiguration : NSObject {
    GEOPDWebModuleConfiguration * _webModuleConfig;
}

@property (getter=shouldDrawPlatter, nonatomic, readonly) bool drawPlatter;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWebModuleConfiguration:(id)arg1;
- (bool)shouldDrawPlatter;
- (id)url;

@end
