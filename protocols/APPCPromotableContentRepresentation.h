
@protocol APPCPromotableContentRepresentation

@required

- (APPCAdPolicyData *)adPolicyData;
- (struct CGSize { double x1; double x2; })adSize;
- (long long)adType;
- (long long)desiredPosition;
- (NSString *)identifier;
- (void)performActionWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (long long)privacyMarkerPosition;
- (APPCTapAction *)tapAction;

@end
