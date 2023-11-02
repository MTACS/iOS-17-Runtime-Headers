
@interface SAAudioAppPredictorResult : NSObject {
    void disambiguateBundleIdentifiers;
    void requestId;
    void selectedBundleIdentifier;
}

@property (nonatomic, readonly) NSArray *disambiguateBundleIdentifiers;
@property (nonatomic, readonly) NSString *requestId;
@property (nonatomic, readonly) NSString *selectedBundleIdentifier;

- (void).cxx_destruct;
- (id)disambiguateBundleIdentifiers;
- (id)init;
- (id)initWithRequestId:(id)arg1 selectedBundleIdentifier:(id)arg2 disambiguateBundleIdentifiers:(id)arg3;
- (id)requestId;
- (id)selectedBundleIdentifier;

@end
