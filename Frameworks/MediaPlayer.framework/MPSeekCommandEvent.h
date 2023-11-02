
@interface MPSeekCommandEvent : MPRemoteCommandEvent {
    unsigned int  _commandType;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (unsigned int)mediaRemoteCommandType;
- (unsigned long long)type;

@end
