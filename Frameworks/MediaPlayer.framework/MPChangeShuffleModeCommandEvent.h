
@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent {
    bool  _preservesShuffleMode;
    long long  _shuffleType;
}

@property (nonatomic, readonly) bool preservesShuffleMode;
@property (nonatomic, readonly) long long shuffleType;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)preservesShuffleMode;
- (long long)shuffleType;

@end
