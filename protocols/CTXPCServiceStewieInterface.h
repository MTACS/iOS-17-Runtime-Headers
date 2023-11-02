
@protocol CTXPCServiceStewieInterface

@required

- (void)activateStewieEmergencyTryOutWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)compressWithStewieCodec:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTStewieCompressionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTStewieCompressionResult *, NSError *, void*
- (void)exitStewieWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTStewieExitContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchRoadsideProvidersWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTFetchRoadsideProvidersContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTRoadsideProviders *, NSError *, void*
- (void)getConnectionAssistantConfig:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTConnectionAssistantConfig *, NSError *, void*
- (void)getConnectionAssistantServicePlot:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTCAServicePlot *, NSError *, void*
- (void)getConnectionAssistantState:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTConnectionAssistantState *, NSError *, void*
- (void)getResumableRoadsideProvider:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTResumableRoadsideProvider *, NSError *, void*
- (void)getStewieSupport:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTStewieSupport *, NSError *, void*
- (void)reportStewieConnectionAssistantEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTStewieConnectionAssistantEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportStewieDeviceOrientation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTStewieDeviceOrientationData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestStewieWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTStewieRequestContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)selectRoadsideProviderWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTSelectRoadsideProviderContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSelectRoadsideProviderResponse *, NSError *, void*
- (void)setStewieBlocked:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)testStewieCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
