
@interface IDSGroupSessionConnectionParameters : NSObject {
    NSString * _multiplexer;
    unsigned long long  _participantID;
    NSData * _salt;
    NSString * _sessionID;
}

@property (nonatomic, copy) NSString *multiplexer;
@property (nonatomic) unsigned long long participantID;
@property (nonatomic, copy) NSData *salt;
@property (nonatomic, copy) NSString *sessionID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStringRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGroupSessionConnectionParameters:(id)arg1;
- (id)multiplexer;
- (unsigned long long)participantID;
- (id)salt;
- (id)sessionID;
- (void)setMultiplexer:(id)arg1;
- (void)setParticipantID:(unsigned long long)arg1;
- (void)setSalt:(id)arg1;
- (void)setSessionID:(id)arg1;
- (id)stringRepresentation;

@end
