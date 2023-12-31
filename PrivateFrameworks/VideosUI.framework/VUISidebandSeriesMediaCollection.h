
@interface VUISidebandSeriesMediaCollection : VUIMediaCollection {
    VUITVSeriesManagedObject * _seriesManagedObject;
}

@property (nonatomic, retain) VUITVSeriesManagedObject *seriesManagedObject;

- (void).cxx_destruct;
- (id)HLSColorCapability;
- (id)canonicalID;
- (id)colorCapability;
- (id)initWithMediaLibrary:(id)arg1 seriesManagedObject:(id)arg2 requestedProperties:(id)arg3;
- (id)isLocal;
- (id)seasonCount;
- (id)seriesManagedObject;
- (void)setSeriesManagedObject:(id)arg1;
- (id)showIdentifier;
- (id)title;

@end
