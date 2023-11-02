
@protocol ATXInfoSuggestionXPCInterface

@required

- (void)stackDidRotateProactivelyForInfoSuggestion:(ATXInfoSuggestion *)arg1 isStalenessRotation:(bool)arg2;
- (void)timelineDidReloadForWidget:(void *)arg1 parentApp:(void *)arg2 withEntries:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CHSWidget *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)userDidDismissSuggestion:(void *)arg1 isDismissalLongTerm:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ATXInfoSuggestion *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
