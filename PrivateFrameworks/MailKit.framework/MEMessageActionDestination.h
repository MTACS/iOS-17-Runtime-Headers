
@interface MEMessageActionDestination : NSObject <NSSecureCoding> {
    long long  _mailboxType;
}

@property (nonatomic, readonly) long long mailboxType;

+ (id)allowedMailboxTypes;
+ (id)archive;
+ (id)inbox;
+ (id)junk;
+ (bool)supportsSecureCoding;
+ (id)trash;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultMailboxType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mailboxType;

@end
