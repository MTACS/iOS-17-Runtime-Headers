
@interface CSAction : NSObject {
    bool  _animated;
    SBFLockScreenActionContext * _context;
    long long  _type;
}

@property (nonatomic) bool animated;
@property (nonatomic, retain) SBFLockScreenActionContext *context;
@property (nonatomic) long long type;

+ (id)actionWithContext:(id)arg1;
+ (id)actionWithType:(long long)arg1;
+ (id)actionWithType:(long long)arg1 animated:(bool)arg2;

- (void).cxx_destruct;
- (bool)animated;
- (id)context;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setType:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
