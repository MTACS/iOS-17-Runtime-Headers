
@interface APPCNativeRepresentation : APPCContentRepresentation {
    void advertiserName;
    void articleID;
    void articleTitle;
    void campaignData;
}

@property (nonatomic, readonly) NSString *advertiserName;
@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) NSString *articleTitle;
@property (nonatomic, readonly) NSString *campaignData;

- (void).cxx_destruct;
- (id)advertiserName;
- (id)articleID;
- (id)articleTitle;
- (id)campaignData;
- (id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 privacyMarkerPosition:(long long)arg4 articleID:(id)arg5 articleTitle:(id)arg6 adSponsor:(id)arg7 campaignData:(id)arg8 adSize:(struct CGSize { double x1; double x2; })arg9 adPolicyData:(id)arg10;

@end
