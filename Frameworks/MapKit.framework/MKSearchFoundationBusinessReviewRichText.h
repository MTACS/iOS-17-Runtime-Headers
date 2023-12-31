
@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText {
    bool  _reviewResolved;
}

@property (getter=isReviewResolved) bool reviewResolved;

- (bool)isReviewResolved;
- (bool)isRichTextResolved;
- (void)resolveReviewStringWithProviderNameByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3;
- (void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3;
- (void)setReviewResolved:(bool)arg1;

@end
