
@protocol FCPersonalizationDataSource

@required

- (NSDictionary *)allAggregates;
- (NTPBPersonalizationAggregate *)createAggregateWith:(NSString *)arg1 clicks:(double)arg2 impressions:(double)arg3;
- (NSDictionary *)lookupAggregatesWith:(void *)arg1 creationBlock:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NTPBPersonalizationAggregate *, id /* block */, NSString *, void*
- (void)updateAggregatesWith:(void *)arg1 creationBlock:(void *)arg2 updateBlock:(void *)arg3; // needs 3 arg types, found 13: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NTPBPersonalizationAggregate *, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NTPBPersonalizationAggregate *, void*

@end
