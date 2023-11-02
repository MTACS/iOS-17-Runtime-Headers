
@interface TRAArbitrationUserInterfaceStyleInputs : NSObject <BSDescriptionProviding, NSCopying> {
    long long  _userInterfaceStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInterfaceStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithUserInterfaceStyle:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUserInterfaceStyleInputs:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)userInterfaceStyle;

@end
