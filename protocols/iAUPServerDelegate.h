
@protocol iAUPServerDelegate

@required

- (void)firmwareUpdateComplete:(NSDictionary *)arg1 error:(NSError *)arg2;
- (NSString *)getDeviceClassName;
- (unsigned char)getPersonalizationID;
- (unsigned int)getWhitelistedPersonalizationFields;
- (void)handleFirmwareUpdateStatus:(NSDictionary *)arg1;
- (void)handleSessionError:(unsigned int)arg1 message:(NSString *)arg2;
- (void)logStatusString:(NSString *)arg1;
- (void)processPersonalizationInfoFromAccessory:(NSDictionary *)arg1;
- (void)updateProgress:(double)arg1;
- (bool)updateRequiresPersonalization;
- (NSError *)writeData:(NSData *)arg1;

@end
