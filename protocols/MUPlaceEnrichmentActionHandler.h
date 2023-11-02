
@protocol MUPlaceEnrichmentActionHandler <NSObject>

@required

- (void)layoutActionsUsingArguments:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)performActionUsingArguments:(void *)arg1 contextMenu:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: id, UIControl *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
