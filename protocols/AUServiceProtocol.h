
@protocol AUServiceProtocol

@required

- (void)applyFirmwareWithOptions:(NSDictionary *)arg1;
- (void)bootstrapWithOptions:(NSDictionary *)arg1;
- (void)deviceClassAttached:(void *)arg1 options:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, void*
- (void)downloadFirmwareWithOptions:(NSDictionary *)arg1;
- (void)findFirmwareWithOptions:(NSDictionary *)arg1 remote:(bool)arg2;
- (void)finishWithOptions:(NSDictionary *)arg1;
- (void)personalizationResponse:(FudPersonalizationRequest *)arg1 response:(NSData *)arg2 status:(NSError *)arg3;
- (void)prepareFirmwareWithOptions:(NSDictionary *)arg1;
- (void)queryDeviceList:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
