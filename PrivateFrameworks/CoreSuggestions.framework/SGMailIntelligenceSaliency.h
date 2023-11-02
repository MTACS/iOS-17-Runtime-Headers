
@interface SGMailIntelligenceSaliency : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    long long  _gteSaliency;
    bool  _isCounted;
    bool  _isSalient;
    NSString * _mailboxId;
    NSString * _messageId;
    NSNumber * _score;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) NSNumber *decayedScore;
@property (nonatomic) long long gteSaliency;
@property (nonatomic) bool isCounted;
@property (nonatomic, readonly) bool isSalient;
@property (nonatomic, readonly) NSString *mailboxId;
@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) NSNumber *score;

+ (id)decayScore:(id)arg1 creationTime:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)decayedScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)gteSaliency;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageId:(id)arg1 mailboxId:(id)arg2 score:(id)arg3 isSalient:(bool)arg4 creationDate:(id)arg5;
- (id)initWithMessageId:(id)arg1 mailboxId:(id)arg2 score:(id)arg3 isSalient:(bool)arg4 gteSaliency:(long long)arg5 isCounted:(bool)arg6 creationDate:(id)arg7;
- (bool)isCounted;
- (bool)isSalient;
- (id)mailboxId;
- (id)messageId;
- (id)score;
- (void)setCreationDate:(id)arg1;
- (void)setGteSaliency:(long long)arg1;
- (void)setIsCounted:(bool)arg1;

@end
