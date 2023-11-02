
@protocol _SFActivityDelegate <NSObject>

@optional

- (long long)provenanceForSafariActivity:(_SFActivity *)arg1;
- (void)safariActivity:(_SFActivity *)arg1 didFinish:(bool)arg2;

@end
