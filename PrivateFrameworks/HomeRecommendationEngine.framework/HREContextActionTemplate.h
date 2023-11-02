
@interface HREContextActionTemplate : HREActionTemplate {
    NSString * _contextActionName;
    <HFIconDescriptor> * _iconDescriptor;
}

@property (nonatomic, retain) NSString *contextActionName;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;

- (void).cxx_destruct;
- (id)contextActionName;
- (id)createStarterRecommendationInHome:(id)arg1;
- (id)iconDescriptor;
- (Class)recommendationClass;
- (void)setContextActionName:(id)arg1;
- (void)setIconDescriptor:(id)arg1;

@end
