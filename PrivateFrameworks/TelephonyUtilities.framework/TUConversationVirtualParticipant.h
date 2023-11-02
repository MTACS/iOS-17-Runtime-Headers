
@interface TUConversationVirtualParticipant : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _identifier;
    NSString * _pluginName;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSString *pluginName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 pluginName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationVirtualParticipant:(id)arg1;
- (id)pluginName;

@end
