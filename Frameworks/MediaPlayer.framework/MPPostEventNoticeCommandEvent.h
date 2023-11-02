
@interface MPPostEventNoticeCommandEvent : MPRemoteCommandEvent {
    NSString * _eventIdentifier;
    NSString * _eventType;
}

@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) NSString *eventType;

- (void).cxx_destruct;
- (id)eventIdentifier;
- (id)eventType;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
