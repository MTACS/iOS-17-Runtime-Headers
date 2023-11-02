
@interface TPSUserTypesValidation : TPSInclusivityValidation

@property (nonatomic, readonly) NSArray *excludeUserTypes;
@property (nonatomic, readonly) NSArray *targetUserTypes;

+ (bool)isBetaBuild;
+ (bool)isInternalBuild;
+ (bool)isUserMatchingType:(id)arg1;

- (id)excludeUserTypes;
- (id)initWithTargetUserTypes:(id)arg1 excludeUserTypes:(id)arg2;
- (id)targetUserTypes;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
