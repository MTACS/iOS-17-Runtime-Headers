
@interface VCWiFiUtils : NSObject

+ (bool)copyAWDLChannelSequence:(id*)arg1 twoPtFourGhzChannelCount:(int*)arg2 fiveGhzChannelCount:(int*)arg3 dfsChannelCount:(int*)arg4 inactiveSlotCount:(int*)arg5;
+ (bool)getInfraChannelNumber:(int*)arg1 is5Ghz:(bool*)arg2;

@end
