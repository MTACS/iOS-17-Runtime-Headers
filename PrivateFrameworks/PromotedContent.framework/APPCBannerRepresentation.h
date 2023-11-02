
@interface APPCBannerRepresentation : APPCContentRepresentation {
    void adTag;
    void adamIdentifier;
    void appAdTemplateType;
    void outstreamVideoInfo;
}

@property (nonatomic, readonly) NSString *adTag;
@property (nonatomic, readonly) NSNumber *adamIdentifier;
@property (nonatomic, readonly) long long appAdTemplateType;
@property (nonatomic, readonly) APPCOutstreamVideoInfo *outstreamVideoInfo;

- (void).cxx_destruct;
- (id)adTag;
- (id)adamIdentifier;
- (long long)appAdTemplateType;
- (id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 privacyMarkerPosition:(long long)arg4 adSize:(struct CGSize { double x1; double x2; })arg5 tapAction:(id)arg6 adTag:(id)arg7 outstreamVideoInfo:(id)arg8 adamIdentifier:(id)arg9 tapActionTemplateType:(long long)arg10 adPolicyData:(id)arg11;
- (id)outstreamVideoInfo;

@end
