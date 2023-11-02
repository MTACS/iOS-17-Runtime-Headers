
@interface CCUICAPackageDescription : NSObject {
    bool  _flipsForRightToLeftLayoutDirection;
    bool  _honorsUIViewAnimationState;
    NSURL * _packageURL;
    NSDictionary * _stateUpdateHandlers;
}

@property (nonatomic) bool flipsForRightToLeftLayoutDirection;
@property (nonatomic) bool honorsUIViewAnimationState;
@property (nonatomic, readonly, copy) NSURL *packageURL;
@property (nonatomic, copy) NSDictionary *stateUpdateHandlers;

+ (id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2;

- (void).cxx_destruct;
- (bool)flipsForRightToLeftLayoutDirection;
- (bool)honorsUIViewAnimationState;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;
- (id)packageURL;
- (void)setFlipsForRightToLeftLayoutDirection:(bool)arg1;
- (void)setHonorsUIViewAnimationState:(bool)arg1;
- (void)setStateUpdateHandlers:(id)arg1;
- (id)stateUpdateHandlers;

@end
