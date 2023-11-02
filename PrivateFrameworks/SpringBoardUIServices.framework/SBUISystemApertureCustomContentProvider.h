
@interface SBUISystemApertureCustomContentProvider : NSObject <SBUISystemApertureContentColorStyling, SBUISystemApertureContentViewProviding> {
    <SBUISystemApertureContentViewContaining> * _contentContainer;
    UIView * _providedView;
}

@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic) <SBUISystemApertureContentViewContaining> *contentContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *providedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentColor;
- (id)contentContainer;
- (id)initWithView:(id)arg1;
- (id)providedView;
- (void)setContentColor:(id)arg1;
- (void)setContentContainer:(id)arg1;

@end
