
@interface BCSRealTimeFlagSignposter : BCSRealTimeShardSignposter <BCSRealTimeFlagMeasurementHandler> {
    long long  _signposterType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)flagMeasurementDidChange:(bool)arg1 forMeasurement:(id)arg2;

@end
