
@interface _SBAggregateCameraLaunchCondition : _SBCameraLaunchCondition {
    NSArray * _conditions;
}

@property (nonatomic, retain) NSArray *conditions;

- (void).cxx_destruct;
- (id)conditions;
- (bool)isMet;
- (void)setConditions:(id)arg1;

@end
