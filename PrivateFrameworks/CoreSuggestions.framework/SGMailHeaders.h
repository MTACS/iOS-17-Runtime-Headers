
@interface SGMailHeaders : NSObject <NSSecureCoding> {
    NSArray * _cc;
    NSArray * _from;
    NSString * _messageId;
    NSString * _subject;
    NSArray * _to;
}

@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, copy) NSArray *from;
@property (nonatomic, readonly, copy) NSString *messageId;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *to;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageId:(id)arg1;
- (id)messageId;
- (void)setCc:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (id)subject;
- (id)to;

@end
