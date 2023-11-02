
@interface AXLTHistogramCalculator : NSObject

+ (id)histogramForAudioPCMBuffer:(id)arg1;
+ (id)histogramForAudioQueueBuffer:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1 packetCount:(long long)arg2 channelsCount:(long long)arg3 format:(unsigned long long)arg4;
+ (id)histogramForFloat32MonoBuffer:(float*)arg1 samplesCount:(long long)arg2;
+ (id)histogramForInt16MonoBuffer:(short*)arg1 samplesCount:(long long)arg2;

@end
