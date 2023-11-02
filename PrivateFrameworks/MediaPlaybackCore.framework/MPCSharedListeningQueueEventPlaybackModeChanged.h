
@interface MPCSharedListeningQueueEventPlaybackModeChanged : NSObject {
    id /* block */  _autoPlayEnabled;
    long long  _kind;
    id /* block */  _repeatType;
    id /* block */  _shuffleType;
}

@property (nonatomic, readonly) id /* block */ autoPlayEnabled;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) id /* block */ repeatType;
@property (nonatomic, readonly) id /* block */ shuffleType;

- (void).cxx_destruct;
- (id /* block */)autoPlayEnabled;
- (id)description;
- (id)initWithUpdatedAutoPlayEnabled:(bool)arg1;
- (id)initWithUpdatedRepeatType:(long long)arg1;
- (id)initWithUpdatedShuffleType:(long long)arg1;
- (long long)kind;
- (id /* block */)repeatType;
- (id /* block */)shuffleType;

@end
