
@interface TRAPreferencesZOrderLevel : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    double  _preferredZOrderLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double preferredZOrderLevel;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithPreferredZOrderLevel:(double)arg1;
- (id)initWithZOrderLevelPreferences:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToZOrderLevelPreferences:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)preferredZOrderLevel;
- (void)setPreferredZOrderLevel:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
