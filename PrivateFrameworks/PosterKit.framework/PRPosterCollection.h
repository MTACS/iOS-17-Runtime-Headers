
@interface PRPosterCollection : NSObject {
    NSMapTable * _associatedPosterMap;
    id /* block */  _attributeProvider;
    id /* block */  _configuredPropertiesProvider;
    NSOrderedSet * _orderedPosters;
    NSSet * _posterExtensions;
    NSMapTable * _posterToAttributeMap;
    PRPosterConfiguration * _selectedPoster;
}

@property (readonly) NSSet *associatedPosterUUIDs;
@property (readonly) NSSet *associatedPosters;
@property (readonly) NSOrderedSet *orderedPosterUUIDs;
@property (readonly, copy) NSOrderedSet *orderedPosters;
@property (readonly) NSSet *posterExtensions;
@property (readonly) PRPosterConfiguration *selectedPoster;

- (void).cxx_destruct;
- (id)associatedHomeScreenConfigurationsMap;
- (id)associatedPosterForPoster:(id)arg1;
- (id)associatedPosterForUUID:(id)arg1;
- (id)associatedPosterUUIDs;
- (id)associatedPosters;
- (id)attributeForPoster:(id)arg1 ofType:(id)arg2;
- (id)attributesForPoster:(id)arg1 ofTypes:(id)arg2;
- (id)chargerIdentifierRelationships;
- (id)configuredPropertiesForPoster:(id)arg1;
- (id)debugDescription;
- (id)fallbackSelectedForSortedConfigurations:(id)arg1 reverse:(bool)arg2;
- (id)initWithSelectedPoster:(id)arg1 posters:(id)arg2 associatedPosterMap:(id)arg3 attributeProvider:(id /* block */)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCollection:(id)arg1;
- (bool)isPosterConfigurationAnAssociatedPoster:(id)arg1 parentPoster:(out id*)arg2;
- (id)orderedPosterUUIDs;
- (id)orderedPosters;
- (id)posterExtensions;
- (id)posterWithUUID:(id)arg1;
- (id)selectedPoster;

@end
