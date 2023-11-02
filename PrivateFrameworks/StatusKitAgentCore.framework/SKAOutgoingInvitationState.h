
@interface SKAOutgoingInvitationState : NSObject {
    NSString * _channelIdentifier;
    SKHandle * _fromHandle;
    SKHandle * _toHandle;
}

@property (nonatomic, retain) NSString *channelIdentifier;
@property (nonatomic, retain) SKHandle *fromHandle;
@property (nonatomic, retain) SKHandle *toHandle;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (id)fromHandle;
- (id)initWithToHandle:(id)arg1 fromHandle:(id)arg2 channelIdentifier:(id)arg3;
- (void)setChannelIdentifier:(id)arg1;
- (void)setFromHandle:(id)arg1;
- (void)setToHandle:(id)arg1;
- (id)toHandle;

@end
