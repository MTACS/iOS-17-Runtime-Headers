
@interface AVAudioSessionSpecification : NSObject <NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    NSString * clientIdentifier;
    unsigned long long  sessionType;
    unsigned int  sourceSessionID;
}

@property (nonatomic) struct { unsigned int x1[8]; } clientAuditToken;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) unsigned int sourceSessionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })clientAuditToken;
- (id)clientIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)sessionType;
- (void)setClientAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setSessionType:(unsigned long long)arg1;
- (void)setSourceSessionID:(unsigned int)arg1;
- (unsigned int)sourceSessionID;

@end
