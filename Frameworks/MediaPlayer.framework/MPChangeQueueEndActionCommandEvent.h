
@interface MPChangeQueueEndActionCommandEvent : MPRemoteCommandEvent {
    bool  _preservesQueueEndAction;
    long long  _queueEndAction;
}

@property (nonatomic, readonly) bool preservesQueueEndAction;
@property (nonatomic, readonly) long long queueEndAction;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)preservesQueueEndAction;
- (long long)queueEndAction;

@end
