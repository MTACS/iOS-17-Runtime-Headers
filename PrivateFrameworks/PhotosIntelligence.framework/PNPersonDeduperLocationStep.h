
@interface PNPersonDeduperLocationStep : PNPersonDeduperStep

- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(id /* block */)arg3 resultBlock:(id /* block */)arg4;
- (bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4;
- (id)metricsKey;
- (id)momentWithBestLocationForPersons:(id)arg1 andOtherPersons:(id)arg2 personsByMomentLocalIdentifiersCache:(id)arg3;
- (id)name;

@end
