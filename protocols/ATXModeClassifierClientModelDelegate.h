
@protocol ATXModeClassifierClientModelDelegate

@required

- (void)clientModel:(id <ATXModeClassifierClientModel>)arg1 didUpdatePredictionWithUUID:(NSString *)arg2 userModeName:(NSString *)arg3 modeType:(unsigned long long)arg4 confidenceScore:(double)arg5 modeOrigin:(long long)arg6 originBundleId:(NSString *)arg7 originAnchorType:(NSString *)arg8 serializedTriggers:(NSArray *)arg9;

@end
