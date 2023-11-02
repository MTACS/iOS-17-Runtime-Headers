
@protocol VNSequencedRequestSupporting

@required

- (<NSObject><NSCopying> *)sequencedRequestPreviousObservationsKey;
- (bool)wantsSequencedRequestObservationsRecording;

@end
