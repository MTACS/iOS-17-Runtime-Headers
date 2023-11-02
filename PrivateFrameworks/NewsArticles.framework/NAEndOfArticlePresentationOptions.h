
@interface NAEndOfArticlePresentationOptions : NSObject {
    void articleBackgroundColor;
    void suppressMoreFromIssueSection;
    void suppressMoreFromSection;
    void suppressMoreToReadSection;
    void suppressRecommendedReadsSection;
    void suppressRelatedSection;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSuppressMoreFromSection:(bool)arg1 suppressMoreToReadSection:(bool)arg2 suppressMoreFromIssueSection:(bool)arg3 suppressRelatedSection:(bool)arg4 suppressRecommendedReadsSection:(long long)arg5 articleBackgroundColor:(id)arg6;

@end
