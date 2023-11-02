
@protocol vCard.CNVCardTagInclusionPolicy <NSObject>

@required

- (bool)shouldCaptureUnknownTags;
- (bool)shouldParseTag:(NSString *)arg1;

@end
