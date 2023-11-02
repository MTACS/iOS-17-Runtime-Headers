
@interface SearchUIOpenMediaHandler : SearchUIMediaHandler

@property (retain) SFOpenMediaCommand *command;

- (id /* block */)actionProvider;
- (id)clientSelectedBundleIdentifier;
- (id)intent;
- (id)mediaMetadata;
- (bool)supportsIntentPath;

@end
