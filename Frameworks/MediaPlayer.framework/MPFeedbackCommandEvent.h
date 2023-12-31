
@interface MPFeedbackCommandEvent : MPRemoteCommandEvent {
    bool  _negative;
}

@property (getter=isNegative, nonatomic, readonly) bool negative;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)isNegative;

@end
