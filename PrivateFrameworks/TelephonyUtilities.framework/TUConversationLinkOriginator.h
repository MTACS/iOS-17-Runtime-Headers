
@interface TUConversationLinkOriginator : NSObject <NSCopying, NSSecureCoding> {
    TUHandle * _handle;
    NSString * _identifier;
    long long  _revision;
}

@property (nonatomic, retain) TUHandle *handle;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long revision;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 revision:(long long)arg2 handle:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationLinkOriginator:(id)arg1;
- (long long)revision;
- (void)setHandle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRevision:(long long)arg1;

@end
