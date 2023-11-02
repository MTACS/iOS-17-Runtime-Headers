
@protocol VCAdaptiveLearningDelegate <NSObject>

@required

- (int)adaptiveLearningState;
- (int)initialSettledBitrate;
- (int)learntBitrateForSegment:(NSString *)arg1 defaultValue:(int)arg2;
- (int)longTermAverageBWEForSegment:(NSString *)arg1;
- (int)longTermAverageISBRForSegment:(NSString *)arg1;
- (int)longTermAverageSARBRForSegment:(NSString *)arg1;
- (int)longTermAverageSATXBRForSegment:(NSString *)arg1;
- (int)longTermAverageTBRForSegment:(NSString *)arg1;
- (int)previousISBRForSegment:(NSString *)arg1;
- (int)shortTermAverageBWEForSegment:(NSString *)arg1;
- (int)shortTermAverageISBRForSegment:(NSString *)arg1;
- (int)shortTermAverageSARBRForSegment:(NSString *)arg1;
- (int)shortTermAverageSATXBRForSegment:(NSString *)arg1;
- (int)shortTermAverageTBRForSegment:(NSString *)arg1;
- (void)updateSegment:(NSString *)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;

@end
