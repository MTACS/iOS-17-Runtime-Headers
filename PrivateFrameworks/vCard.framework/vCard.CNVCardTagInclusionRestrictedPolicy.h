
@interface vCard.CNVCardTagInclusionRestrictedPolicy : NSObject <vCard.CNVCardTagInclusionPolicy> {
    void shouldCaptureUnknownTags;
    void tags;
}

@property (nonatomic) bool shouldCaptureUnknownTags;

- (void).cxx_destruct;
- (id)init;
- (void)setShouldCaptureUnknownTags:(bool)arg1;
- (bool)shouldCaptureUnknownTags;
- (bool)shouldParseTag:(id)arg1;

@end
