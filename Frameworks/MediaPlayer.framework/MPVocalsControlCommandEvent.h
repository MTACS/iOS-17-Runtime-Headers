
@interface MPVocalsControlCommandEvent : MPRemoteCommandEvent {
    NSNumber * _active;
    NSNumber * _level;
}

@property (nonatomic, readonly) NSNumber *active;
@property (nonatomic, readonly) NSNumber *level;

- (void).cxx_destruct;
- (id)active;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)level;

@end
