
@protocol SRRequestRecording <SRRequestReading>

@required

- (NSError *)configurationDecodeError;
- (NSDictionary *)sensorConfiguration;
- (void)setSensorConfiguration:(NSDictionary *)arg1;

@end
