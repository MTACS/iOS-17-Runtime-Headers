
@protocol STContentPrivacyViewModelCoordinator <NSObject>

@required

- (void)loadValuesByRestrictionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)saveCommunicationLimits:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STCommunicationLimits *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveContentPrivacyEnabled:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveRestrictionValue:(void *)arg1 forItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: id, STRestrictionItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveValuesForRestrictions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (STContentPrivacyViewModel *)viewModel;

@end
