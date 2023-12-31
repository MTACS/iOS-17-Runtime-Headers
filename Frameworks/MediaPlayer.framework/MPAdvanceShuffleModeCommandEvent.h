
@interface MPAdvanceShuffleModeCommandEvent : MPRemoteCommandEvent {
    bool  _preservesShuffleMode;
}

@property (nonatomic, readonly) bool preservesShuffleMode;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)preservesShuffleMode;

@end
