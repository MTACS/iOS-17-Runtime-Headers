
@interface BMUserFocusComputedModeStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream * _storeStream;
}

@property (nonatomic, readonly) NSString *identifier;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)source;

// Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient

- (id)currentBMUserFocusComputedModeEvent;
- (id)currentBMUserFocusComputedStoreEvent;
- (id)currentModeUUID;
- (id)lastTwoUserFocusComputedStoreEvents;

@end
