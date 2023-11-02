
@protocol VKAnalysisDebugInfoProvider <NSObject>

@required

- (unsigned long long)activeInteractionTypes;
- (VKCImageAnalysisResult *)analysisResult;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)delegate;
- (bool)isSubjectAnalysisComplete;
- (VKTextRange *)selectedRange;
- (VKCImageSubjectContext *)subjectContext;
- (unsigned long long)subjectRequestStatus;
- (double)totalBoundingBoxTextArea;
- (double)totalQuadTextArea;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleImageRect;
- (struct VKVisibleTextAreaInfo { double x1; double x2; double x3; double x4; unsigned long long x5; })visibleTextAreaInfo;

@end
