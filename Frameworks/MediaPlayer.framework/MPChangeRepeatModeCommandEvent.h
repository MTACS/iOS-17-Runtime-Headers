
@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent {
    bool  _preservesRepeatMode;
    long long  _repeatType;
}

@property (nonatomic, readonly) bool preservesRepeatMode;
@property (nonatomic, readonly) long long repeatType;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)preservesRepeatMode;
- (long long)repeatType;

@end
