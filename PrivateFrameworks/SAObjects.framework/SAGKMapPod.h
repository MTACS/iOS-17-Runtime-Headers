
@interface SAGKMapPod : SAGKPodView

@property (nonatomic, retain) SALocation *location;
@property (nonatomic, retain) SAUIAppPunchOut *punchOut;
@property (nonatomic, copy) NSNumber *showButton;
@property (nonatomic, copy) NSNumber *zoomLevel;

+ (id)mapPod;
+ (id)mapPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)location;
- (id)punchOut;
- (void)setLocation:(id)arg1;
- (void)setPunchOut:(id)arg1;
- (void)setShowButton:(id)arg1;
- (void)setZoomLevel:(id)arg1;
- (id)showButton;
- (id)zoomLevel;

@end
