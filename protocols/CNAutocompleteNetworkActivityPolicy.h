
@protocol CNAutocompleteNetworkActivityPolicy <NSObject>

@required

- (double)delayBeforeBeginningNetworkActivity;
- (bool)shouldSearchServers;

@end
