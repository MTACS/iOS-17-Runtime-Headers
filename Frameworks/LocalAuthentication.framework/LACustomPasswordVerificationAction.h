
@interface LACustomPasswordVerificationAction : NSObject {
    NSString * _customPassword;
    long long  _type;
}

+ (id)submitCustomPasswordAction:(id)arg1;
+ (id)terminateAction;
+ (id)userCancelAction;

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;

@end
