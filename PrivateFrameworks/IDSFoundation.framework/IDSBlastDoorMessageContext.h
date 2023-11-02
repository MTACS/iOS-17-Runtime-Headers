
@interface IDSBlastDoorMessageContext : NSObject {
    NSNumber * _command;
    bool  _isInvitationService;
    NSString * _topic;
}

@property (nonatomic, retain) NSNumber *command;
@property (nonatomic) bool isInvitationService;
@property (nonatomic, retain) NSString *topic;

- (void).cxx_destruct;
- (id)command;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)arg1 command:(id)arg2;
- (bool)isInvitationService;
- (void)setCommand:(id)arg1;
- (void)setIsInvitationService:(bool)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;

@end
