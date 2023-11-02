
@protocol SHSheetServiceManagerDelegate <NSObject>

@required

- (void)serviceManager:(SHSheetServiceManager *)arg1 didPerformInServiceActivityWithIdentifier:(NSUUID *)arg2 completed:(bool)arg3 items:(NSArray *)arg4 error:(NSError *)arg5;
- (void)serviceManager:(SHSheetServiceManager *)arg1 didUpdateAirDropTransferWithChange:(SFAirDropTransferChange *)arg2;
- (NSData *)serviceManager:(SHSheetServiceManager *)arg1 identificationResultsFromSuggestedImageData:(NSData *)arg2;
- (void)serviceManager:(SHSheetServiceManager *)arg1 performActivity:(UIActivity *)arg2;
- (void)serviceManager:(SHSheetServiceManager *)arg1 performAirdropViewActivityWithNoContentView:(bool)arg2;
- (void)serviceManager:(SHSheetServiceManager *)arg1 performUserDefaultsActivityWithContext:(SHSheetUserDefaultsContext *)arg2;
- (void)serviceManager:(void *)arg1 willPerformActivityInServiceForRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SHSheetServiceManager *, UISUIActivityExtensionItemDataRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, UISDActivityItemData *, void*
- (void)serviceManagerDidChangeConnectionState:(SHSheetServiceManager *)arg1;

@end
