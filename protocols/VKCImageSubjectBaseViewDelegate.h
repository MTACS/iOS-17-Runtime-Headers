
@protocol VKCImageSubjectBaseViewDelegate <NSObject>

@required

- (void)subjectBaseView:(VKCImageSubjectBaseView *)arg1 analyticsEventOccurred:(VKAnalyticsSubjectEvent *)arg2;
- (void)subjectBaseViewDidBeginSubjectAnalysis:(VKCImageSubjectBaseView *)arg1;
- (void)subjectBaseViewGlowLayerActiveDidChange:(VKCImageSubjectBaseView *)arg1;
- (void)subjectBaseViewViewDidCompletePath:(VKCImageSubjectBaseView *)arg1;
- (void)subjectBaseViewViewDidCompleteSubjectAnalysis:(VKCImageSubjectBaseView *)arg1;

@end
