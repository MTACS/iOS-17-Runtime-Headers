
@protocol BRRTCMetric <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (unsigned short)rtcType;
- (void)setRtcType:(unsigned short)arg1;

@end
