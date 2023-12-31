
@interface MPAdvanceRepeatModeCommandEvent : MPRemoteCommandEvent {
    bool  _preservesRepeatMode;
}

@property (nonatomic, readonly) bool preservesRepeatMode;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)preservesRepeatMode;

@end
