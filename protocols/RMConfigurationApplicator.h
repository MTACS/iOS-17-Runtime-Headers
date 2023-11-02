
@protocol RMConfigurationApplicator <NSObject>

@required

+ (NSSet *)supportedConfigurationTypes;

- (void)applyConfigurations:(void *)arg1 storesByIdentifier:(void *)arg2 scope:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: NSArray *, NSDictionary *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)configurationUIForConfiguration:(void *)arg1 scope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: RMSubscribedConfigurationReference *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, RMConfigurationUIDetails *, NSError *, void*

@end
