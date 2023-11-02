
@interface AFDeleteSiriHistoryContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _errorBody;
    NSString * _errorButtonText;
    NSString * _errorTitle;
    NSString * _successBody;
    NSString * _successButtonText;
    NSString * _successTitle;
}

@property (nonatomic, readonly, copy) NSString *errorBody;
@property (nonatomic, readonly, copy) NSString *errorButtonText;
@property (nonatomic, readonly, copy) NSString *errorTitle;
@property (nonatomic, readonly, copy) NSString *successBody;
@property (nonatomic, readonly, copy) NSString *successButtonText;
@property (nonatomic, readonly, copy) NSString *successTitle;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorBody;
- (id)errorButtonText;
- (id)errorTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccessTitle:(id)arg1 successBody:(id)arg2 successButtonText:(id)arg3 errorTitle:(id)arg4 errorBody:(id)arg5 errorButtonText:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)successBody;
- (id)successButtonText;
- (id)successTitle;

@end
