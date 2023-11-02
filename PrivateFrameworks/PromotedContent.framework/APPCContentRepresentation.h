
@interface APPCContentRepresentation : NSObject <APPCPromotableContentRepresentation> {
    void adPolicyData;
    void adSize;
    void adType;
    void desiredPosition;
    void identifier;
    void privacyMarkerPosition;
    void tapAction;
}

@property (nonatomic, readonly) APPCAdPolicyData *adPolicyData;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } adSize;
@property (nonatomic, readonly) long long adType;
@property (nonatomic, readonly) long long desiredPosition;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long privacyMarkerPosition;
@property (nonatomic, readonly) APPCTapAction *tapAction;

- (void).cxx_destruct;
- (id)adPolicyData;
- (struct CGSize { double x1; double x2; })adSize;
- (long long)adType;
- (long long)desiredPosition;
- (id)identifier;
- (id)init;
- (void)performActionWithCompletion:(id /* block */)arg1;
- (long long)privacyMarkerPosition;
- (id)tapAction;

@end
