
@protocol PXVideoProcessingOperationResult <NSObject>

@required

- (NSDictionary *)debugInfo;
- (NSDictionary *)dictionaryRepresentation;
- (NSError *)error;
- (AVAudioMix *)outputAudioMix;
- (AVAsset *)outputVideoAsset;
- (AVVideoComposition *)outputVideoComposition;
- (PXVideoProcessingOperationSpec *)spec;

@end
