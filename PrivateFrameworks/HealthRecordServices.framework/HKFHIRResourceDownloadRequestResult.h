
@interface HKFHIRResourceDownloadRequestResult : NSObject <NSCopying, NSSecureCoding> {
    HKFHIRRequestTaskEndStates * _endStates;
    NSError * _error;
    HKFHIRCredentialRefreshResult * _refreshResult;
    NSData * _resourceBundleData;
}

@property (nonatomic, readonly, copy) HKFHIRRequestTaskEndStates *endStates;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) HKFHIRCredentialRefreshResult *refreshResult;
@property (nonatomic, readonly, copy) NSData *resourceBundleData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endStates;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithError:(id)arg1 endStates:(id)arg2 refreshResult:(id)arg3;
- (id)initWithResourceBundleData:(id)arg1 endStates:(id)arg2 refreshResult:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)refreshResult;
- (id)resourceBundleData;

@end
