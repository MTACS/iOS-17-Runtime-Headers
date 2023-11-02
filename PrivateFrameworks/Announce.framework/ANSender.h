
@interface ANSender : NSObject <NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long type;

+ (id)senderWithID:(id)arg1 type:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 type:(unsigned long long)arg2;
- (id)stringForSenderIdentifierType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
