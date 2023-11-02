
@interface LACustomPasswordRequirement : NSObject <LAACLSerializable> {
    NSString * _password;
}

+ (void)requestCreationWithLocalizedReason:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)encodeWithACLCoder:(id)arg1;
- (id)initWithCustomPassword:(id)arg1;

@end
