
@interface LNActionConfigurationWhen : LNActionConfiguration <NSSecureCoding> {
    LNActionConfigurationCondition * _condition;
    LNActionConfiguration * _otherwise;
    LNActionConfiguration * _when;
}

@property (nonatomic, readonly) LNActionConfigurationCondition *condition;
@property (nonatomic, readonly) LNActionConfiguration *otherwise;
@property (nonatomic, readonly) LNActionConfiguration *when;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCondition:(id)arg1 when:(id)arg2 otherwise:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)otherwise;
- (id)when;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)actionConfigurationByEvaluatingAction:(id)arg1;
- (id)actionConfigurationByEvaluatingAction:(id)arg1 context:(id)arg2;
- (id)valueForAction:(id)arg1 context:(id)arg2;

@end
