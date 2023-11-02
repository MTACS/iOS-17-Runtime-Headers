
@interface vCard.CNVCardTagInclusionPermissivePolicy : NSObject <vCard.CNVCardTagInclusionPolicy> {
    void shouldCaptureUnknownTags;
}

@property (nonatomic) bool shouldCaptureUnknownTags;

- (id)init;
- (void)setShouldCaptureUnknownTags:(bool)arg1;
- (bool)shouldCaptureUnknownTags;
- (bool)shouldParseTag:(id)arg1;

@end
