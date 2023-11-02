
@interface HREActionSetTemplate : HREActionTemplate {
    NSString * _actionSetName;
    NSString * _actionSetType;
    <HFIconDescriptor> * _iconDescriptor;
}

@property (nonatomic, retain) NSString *actionSetName;
@property (nonatomic, retain) NSString *actionSetType;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;

- (void).cxx_destruct;
- (id)actionSetName;
- (id)actionSetType;
- (id)createStarterRecommendationInHome:(id)arg1;
- (id)iconDescriptor;
- (id)init;
- (Class)recommendationClass;
- (void)setActionSetName:(id)arg1;
- (void)setActionSetType:(id)arg1;
- (void)setIconDescriptor:(id)arg1;

@end
