
@interface CERecommendationAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionIdentifier;
    NSString * _actionTitle;
    NSString * _actionType;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSString *actionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionTitle;
- (id)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionTitle:(id)arg2 actionType:(id)arg3;
- (void)setActionIdentifier:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setActionType:(id)arg1;

@end
