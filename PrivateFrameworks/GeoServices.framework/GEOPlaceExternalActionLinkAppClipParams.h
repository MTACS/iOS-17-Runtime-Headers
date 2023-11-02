
@interface GEOPlaceExternalActionLinkAppClipParams : NSObject {
    GEOPDAppClipParams * _appClipParams;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)bundleId;
- (id)initWithAppClipParams:(id)arg1;
- (id)url;

@end
