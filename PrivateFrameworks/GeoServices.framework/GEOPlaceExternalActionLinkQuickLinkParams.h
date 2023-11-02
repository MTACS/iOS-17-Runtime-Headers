
@interface GEOPlaceExternalActionLinkQuickLinkParams : NSObject {
    GEOPDQuickLinkActionDataParams * _quickLinkParams;
}

@property (nonatomic, readonly) NSString *appAdamId;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)appAdamId;
- (id)initWithQuickLinkParams:(id)arg1;
- (id)url;

@end
