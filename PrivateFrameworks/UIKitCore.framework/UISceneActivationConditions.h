
@interface UISceneActivationConditions : NSObject <NSCopying, NSSecureCoding> {
    NSPredicate * _canActivatePredicate;
    NSPredicate * _prefersPredicate;
    UIScene * _uiScene;
}

@property (setter=_setUIScene:, nonatomic) UIScene *_UIScene;
@property (nonatomic, copy) NSPredicate *canActivateForTargetContentIdentifierPredicate;
@property (nonatomic, copy) NSPredicate *prefersToActivateForTargetContentIdentifierPredicate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_UIScene;
- (void)_setUIScene:(id)arg1;
- (long long)_suitabilityForTargetContentIdentifier:(id)arg1 errorString:(id*)arg2;
- (bool)_validateCompileTimeIssues:(id*)arg1 runTimeIssues:(id*)arg2;
- (id)canActivateForTargetContentIdentifierPredicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)prefersToActivateForTargetContentIdentifierPredicate;
- (void)setCanActivateForTargetContentIdentifierPredicate:(id)arg1;
- (void)setPrefersToActivateForTargetContentIdentifierPredicate:(id)arg1;

@end
