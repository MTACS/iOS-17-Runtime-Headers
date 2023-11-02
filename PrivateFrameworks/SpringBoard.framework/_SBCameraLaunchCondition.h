
@interface _SBCameraLaunchCondition : NSObject {
    bool  _met;
}

@property (getter=isMet, nonatomic) bool met;

+ (id)conditionWithConditions:(id)arg1;
+ (id)conditionWithValue:(bool)arg1;

- (bool)isMet;
- (void)setMet:(bool)arg1;

@end
