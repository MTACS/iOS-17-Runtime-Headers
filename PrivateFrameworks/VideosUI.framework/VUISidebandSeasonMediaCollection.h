
@interface VUISidebandSeasonMediaCollection : VUIMediaCollection {
    VUITVSeasonManagedObject * _seasonManagedObject;
}

@property (nonatomic, retain) VUITVSeasonManagedObject *seasonManagedObject;

- (void).cxx_destruct;
- (id)HLSColorCapability;
- (id)canonicalID;
- (id)colorCapability;
- (id)initWithMediaLibrary:(id)arg1 seasonManagedObject:(id)arg2 requestedProperties:(id)arg3;
- (id)isLocal;
- (id)seasonManagedObject;
- (id)seasonNumber;
- (void)setSeasonManagedObject:(id)arg1;
- (id)showIdentifier;
- (id)title;

@end
