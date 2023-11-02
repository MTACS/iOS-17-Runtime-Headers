
@protocol ATXProactiveSuggestionClientModelXPCInterface

@required

- (void)clientModelUpdatedNotificationId:(void *)arg1 clientModelId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clientModelUpdatedSuggestions:(void *)arg1 feedbackMetadata:(void *)arg2 clientModelId:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)generateLayoutForRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: ATXSuggestionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ATXUICacheProtocol> *, void*
- (void)generateRankedSuggestionsForRequest:(void *)arg1 limit:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: ATXSuggestionRequest *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)retrieveSuggestionsForClientModelId:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
