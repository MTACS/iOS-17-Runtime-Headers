
@interface ASCLockupProductDetails : NSObject {
    ASCLockup * _lockup;
    NSDictionary * _parameters;
    NSString * _storeSheetHostBundleID;
    NSString * _storeSheetUsageContext;
}

@property (nonatomic, readonly, copy) ASCLockup *lockup;
@property (nonatomic, readonly, copy) NSDictionary *parameters;
@property (nonatomic, readonly, copy) NSString *storeSheetHostBundleID;
@property (nonatomic, readonly, copy) NSString *storeSheetUsageContext;

+ (id)URLForLockupID:(id)arg1 ofKind:(id)arg2 offerFlags:(long long)arg3 queryParameters:(id)arg4;
+ (id)URLForLockupID:(id)arg1 ofKind:(id)arg2 withOfferFlags:(long long)arg3;
+ (id)queryParametersForLockup:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLockup:(id)arg1;
- (id)initWithLockup:(id)arg1 storeSheetHostBundleID:(id)arg2 storeSheetUsageContext:(id)arg3;
- (id)initWithLockup:(id)arg1 storeSheetHostBundleID:(id)arg2 storeSheetUsageContext:(id)arg3 parameters:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lockup;
- (id)parameters;
- (void)present:(id /* block */)arg1;
- (void)presentFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)storeSheetHostBundleID;
- (id)storeSheetUsageContext;

@end
