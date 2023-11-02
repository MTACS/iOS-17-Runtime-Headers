
@interface DDTimeLineAction : DDRemoteAction {
    NSDate * _startDate;
}

+ (id)viewControllerProviderClass;

- (void).cxx_destruct;
- (id)commitURL;
- (id)menuActionClasses;
- (id)platterTitle;
- (id)previewActions;
- (id)startDate;
- (struct CGSize { double x1; double x2; })suggestedContentSize;

@end
