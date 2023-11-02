
@interface MEMessageRecipients : NSObject <NSSecureCoding> {
    NSArray * _bcc;
    NSArray * _cc;
    NSArray * _replyTo;
    NSArray * _to;
}

@property (nonatomic, readonly, copy) NSArray *allRecipients;
@property (nonatomic, readonly, copy) NSArray *bcc;
@property (nonatomic, readonly, copy) NSArray *cc;
@property (nonatomic, readonly, copy) NSArray *replyTo;
@property (nonatomic, readonly, copy) NSArray *to;

+ (id)emailAddressesForEmailAddressStrings:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allRecipients;
- (id)bcc;
- (id)cc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringsTo:(id)arg1 cc:(id)arg2 bcc:(id)arg3 replyTo:(id)arg4;
- (id)initWithTo:(id)arg1 cc:(id)arg2 bcc:(id)arg3 replyTo:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)replyTo;
- (id)to;

@end
