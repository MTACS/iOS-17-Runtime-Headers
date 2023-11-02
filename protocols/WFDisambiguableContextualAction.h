
@protocol WFDisambiguableContextualAction

@required

+ (NSSet *)availableCollectionIdentifiers;
+ (WFTopHitItemContextualAction *)disambiguationAction;
+ (void)disambiguationEntriesForCollection:(void *)arg1 limit:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
+ (WFContextualActionParameter *)disambiguationParameter;
+ (NSString *)disambiguationSummaryStringForCollection:(NSString *)arg1;
+ (NSString *)disambiguationSummaryStringWithParameterDefined:(bool)arg1;

@end
