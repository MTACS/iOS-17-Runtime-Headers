
@interface MPModelStaticResponse : MPModelResponse <MPCModelPlaybackResponse>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinalResponse, nonatomic, readonly) bool finalResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)isFinalResponse;

@end
