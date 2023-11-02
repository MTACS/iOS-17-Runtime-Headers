
@interface GEOModuleConfiguration : NSObject {
    GEOPDModuleConfiguration * _moduleConfig;
}

@property (nonatomic, readonly) GEOButtonModuleConfiguration *actionButtonConfig;
@property (nonatomic, readonly) GEOBusinessInfoModuleConfiguration *businessInfoConfig;
@property (nonatomic, readonly) GEOHeaderButtonModuleConfiguration *headerButtonConfig;
@property (nonatomic, readonly) GEOPlaceDetailsModuleConfiguration *placeDetailsConfig;
@property (nonatomic, readonly) GEOPlaceRibbonConfiguration *placeRibbonConfig;
@property (nonatomic, readonly) GEORelatedPlaceModuleConfiguration *relatedPlaceConfig;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) GEOUnifiedActionButtonModuleConfiguration *unifiedActionConfig;
@property (nonatomic, readonly) GEOWebContentModuleConfiguration *webContentConfig;

+ (id)moduleConfigurationForURL:(id)arg1;

- (void).cxx_destruct;
- (void)_logNoModuleConfigMatchForType;
- (id)actionButtonConfig;
- (id)businessInfoConfig;
- (id)description;
- (id)headerButtonConfig;
- (id)initWithModuleConfiguration:(id)arg1;
- (id)placeDetailsConfig;
- (id)placeRibbonConfig;
- (id)relatedPlaceConfig;
- (int)type;
- (id)unifiedActionConfig;
- (id)webContentConfig;

@end
