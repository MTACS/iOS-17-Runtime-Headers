
@interface APPCNativeLayoutRepresentation : APPCContentRepresentation {
    void accessibilityAdCopy;
    void accessibilityHeadline;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  actionURL;
    void adCopy;
    void adFormatType;
    void button;
    void elements;
    void headline;
    void sponsoredBy;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sponsoredByAssetProxyURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sponsoredByAssetURL;
}

@property (nonatomic, readonly) NSString *accessibilityAdCopy;
@property (nonatomic, readonly) NSString *accessibilityHeadline;
@property (nonatomic, readonly) NSURL *actionURL;
@property (nonatomic, readonly) NSString *adCopy;
@property (nonatomic, readonly) long long adFormatType;
@property (nonatomic, readonly) APPCClientLayoutButton *button;
@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) NSString *headline;
@property (nonatomic, readonly) NSString *sponsoredBy;
@property (nonatomic, readonly) NSURL *sponsoredByAssetProxyURL;
@property (nonatomic, readonly) NSURL *sponsoredByAssetURL;

- (void).cxx_destruct;
- (id)accessibilityAdCopy;
- (id)accessibilityHeadline;
- (id)actionURL;
- (id)adCopy;
- (long long)adFormatType;
- (id)button;
- (id)elements;
- (id)headline;
- (id)initWithIdentifier:(id)arg1 adIdentifier:(id)arg2 adType:(long long)arg3 desiredPosition:(long long)arg4 privacyMarkerPosition:(long long)arg5 adSize:(struct CGSize { double x1; double x2; })arg6 headline:(id)arg7 accessibilityHeadline:(id)arg8 adCopy:(id)arg9 accessibilityAdCopy:(id)arg10 sponsoredBy:(id)arg11 elements:(id)arg12 adPolicyData:(id)arg13 adFormatType:(long long)arg14 sponsoredByAssetURL:(id)arg15 button:(id)arg16 actionURL:(id)arg17;
- (id)sponsoredBy;
- (id)sponsoredByAssetProxyURL;
- (id)sponsoredByAssetURL;

@end
