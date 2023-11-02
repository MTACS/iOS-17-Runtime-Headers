
@interface MPChangePlaybackPositionCommandEvent : MPRemoteCommandEvent {
    double  _positionTime;
}

@property (nonatomic, readonly) double positionTime;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (double)positionTime;

@end
