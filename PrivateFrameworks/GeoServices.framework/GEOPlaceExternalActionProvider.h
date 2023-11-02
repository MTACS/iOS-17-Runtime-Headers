
@interface GEOPlaceExternalActionProvider : NSObject {
    GEOPDActionLink * _actionLink;
    NSMapTable * _attributionMap;
}

@property (nonatomic, readonly) NSString *appAdamId;
@property (nonatomic, readonly) NSArray *supportedIntegrations;

- (void).cxx_destruct;
- (id)appAdamId;
- (id)initWithActionLink:(id)arg1 attributionMap:(id)arg2;
- (id)supportedIntegrations;

@end
