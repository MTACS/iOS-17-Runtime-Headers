
@interface VCRateSharingGroup : VCObject {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    unsigned int  _maxBitrate;
    struct tagVCMediaQueue { } * _mediaQueue;
    NSString * _mediaQueueIdentifier;
    NSMutableDictionary * _rateSharingClientMap;
    NSMutableDictionary * _rateSharingClientTargetBitrateDict;
    NSMutableDictionary * _shareProfileDictionary;
}

@property (readonly) unsigned int maxBitrate;
@property (readonly) struct tagVCMediaQueue { }*mediaQueue;

- (unsigned int)calculateMaxTargetBitrate;
- (unsigned int)countRateControllersForInterfaceType:(id)arg1;
- (bool)createMediaQueue;
- (void)dealloc;
- (bool)deregisterRateSharingClient:(id)arg1;
- (void)handleMediaQueueSizeExceedThresholdWithQueueSize:(double)arg1 mediaQueueStreamId:(unsigned int)arg2 type:(int)arg3;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (unsigned int)maxBitrate;
- (struct tagVCMediaQueue { }*)mediaQueue;
- (bool)registerRateSharingClient:(id)arg1 forInterfaceType:(unsigned int)arg2;
- (void)setTargetBitrate:(unsigned int)arg1 fromRateSharingClient:(id)arg2;
- (void)setVCMediaQueuePeakBitrateAndMaxTargetBitrate:(unsigned int)arg1;
- (void)updateShareProfileForInterfaceType:(id)arg1;

@end
