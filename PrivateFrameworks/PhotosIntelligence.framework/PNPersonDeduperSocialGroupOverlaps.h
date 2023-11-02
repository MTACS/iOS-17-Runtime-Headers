
@interface PNPersonDeduperSocialGroupOverlaps : PNPersonDeduperStep

- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(id /* block */)arg3 resultBlock:(id /* block */)arg4;
- (bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4;
- (void)mergePersons:(id)arg1 otherPersonLocalIdentifiers:(id)arg2 personsFetchResult:(id)arg3 mergeSocialGroupPersonIdentifiers:(id)arg4;
- (id)metricsKey;
- (id)name;

@end
