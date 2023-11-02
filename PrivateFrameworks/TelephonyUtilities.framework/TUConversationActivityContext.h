
@interface TUConversationActivityContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionDescription;
    NSString * _completedDescription;
    NSString * _ongoingDescription;
    NSString * _typedIdentifier;
}

@property (nonatomic, copy) NSString *actionDescription;
@property (nonatomic, copy) NSString *completedDescription;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isMedia, nonatomic, readonly) bool media;
@property (nonatomic, copy) NSString *ongoingDescription;
@property (nonatomic, copy) NSString *typedIdentifier;

+ (id)mediaContextIdentifiers;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionDescription;
- (id)completedDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextIdentifier:(id)arg1 actionDescription:(id)arg2 ongoingDescription:(id)arg3 completedDescription:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActivityContext:(id)arg1;
- (bool)isMedia;
- (id)ongoingDescription;
- (void)setActionDescription:(id)arg1;
- (void)setCompletedDescription:(id)arg1;
- (void)setOngoingDescription:(id)arg1;
- (void)setTypedIdentifier:(id)arg1;
- (id)typedIdentifier;

@end
