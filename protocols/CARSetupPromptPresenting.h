
@protocol CARSetupPromptPresenting <NSObject>

@required

- (void)promptDirector:(void *)arg1 wantsToPresentAllowWhileLockedPromptForVehicleName:(void *)arg2 responseHandler:(void *)arg3; // needs 3 arg types, found 8: CARSetupPromptDirector *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)promptDirector:(void *)arg1 wantsToPresentConnectPromptWithResponseHandler:(void *)arg2; // needs 2 arg types, found 7: CARSetupPromptDirector *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)promptDirector:(void *)arg1 wantsToPresentEnhancedIntegrationPromptForVehicleName:(void *)arg2 responseHandler:(void *)arg3; // needs 3 arg types, found 8: CARSetupPromptDirector *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)promptDirector:(void *)arg1 wantsToPresentUseWirelessPromptWithResponseHandler:(void *)arg2; // needs 2 arg types, found 7: CARSetupPromptDirector *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
