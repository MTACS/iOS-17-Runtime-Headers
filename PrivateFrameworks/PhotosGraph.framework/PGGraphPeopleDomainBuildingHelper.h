
@interface PGGraphPeopleDomainBuildingHelper : NSObject {
    NSMutableDictionary * _authorNodeByLocalIdentifier;
    NSMutableDictionary * _insertedIdentifiedPersonByPersonLocalIdentifier;
}

- (void).cxx_destruct;
- (void)cacheAuthorNode:(id)arg1 forShareParticipant:(id)arg2;
- (id)cachedAuthorNodeForShareParticipant:(id)arg1;
- (id)init;
- (id)insertIdentifiedPersonWithPersonNode:(id)arg1 forPersonLocalIdentifier:(id)arg2;
- (id)insertedIdentifiedPersonForPersonLocalIdentifier:(id)arg1;

@end
