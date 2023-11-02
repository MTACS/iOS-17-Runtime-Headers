
@protocol VCCaptionsTranscriptionSegment

@required

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (NSString *)text;

@end
