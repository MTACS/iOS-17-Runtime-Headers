
@interface WFLinkEntityContentItem : WFContentItem {
    LNDisplayRepresentation * _displayRepresentation;
}

@property (nonatomic, retain) LNDisplayRepresentation *displayRepresentation;
@property (nonatomic, readonly) LNEntity *entity;

+ (id)allProperties;
+ (id)allowedOperatorsWithQueryParameterMetadata:(id)arg1 objectClass:(Class)arg2 operators:(id)arg3;
+ (id)appBundleIdentifier;
+ (id)displayedAppBundleIdentifier;
+ (id)entityMetadata;
+ (bool)hasInMemoryFindAction;
+ (bool)hasLibrary;
+ (void)initialize;
+ (bool)isNoteEntity;
+ (bool)isNoteFolderEntityIdentifier:(id)arg1;
+ (bool)isNotes;
+ (id)localizedCountDescriptionWithValue:(long long)arg1;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)queryMetadata;
+ (bool)supportsSecureCoding;
+ (id)typeDescription;

- (void).cxx_destruct;
- (Class)classForCoder;
- (Class)classForCopying;
- (Class)classForKeyedArchiver;
- (void)copyStateToItem:(id)arg1;
- (id)displayRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setDisplayRepresentation:(id)arg1;

@end
