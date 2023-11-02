
@interface SBUISystemApertureStackedContentProvider : NSObject <SBUISystemApertureContentViewProviding> {
    <SBUISystemApertureContentViewContaining> * _contentContainer;
    UIView * _providedView;
}

@property (nonatomic) long long contentAxis;
@property (nonatomic) <SBUISystemApertureContentViewContaining> *contentContainer;
@property (nonatomic) long long contentDistribution;
@property (nonatomic) double contentSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *providedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_providedView;
- (long long)contentAxis;
- (id)contentContainer;
- (long long)contentDistribution;
- (double)contentSpacing;
- (id)initWithContentViewProviders:(id)arg1;
- (id)providedView;
- (void)setContentAxis:(long long)arg1;
- (void)setContentContainer:(id)arg1;
- (void)setContentDistribution:(long long)arg1;
- (void)setContentSpacing:(double)arg1;

@end
