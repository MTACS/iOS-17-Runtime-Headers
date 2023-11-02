
@interface MPModelStaticRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelRequestRTCReporting> {
    MPModelStaticResponse * _staticResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableImplicitSectioning;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic) bool shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic, retain) MPModelStaticResponse *staticResponse;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setStaticResponse:(id)arg1;
- (id)staticResponse;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)rtcReportingPlayQueueSourceIdentifier;

@end
