
@interface CTCellularUsageWorkspaceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _billingCycleEndDate;
    NSNumber * _billingCycleSupported;
    NSNumber * _carrierSpaceSupported;
    NSNumber * _metaDataForHomeCountry;
    NSNumber * _metaDataForRoaming;
    NSDate * _previousBillingCycleDate;
    NSNumber * _subscriberTag;
    NSString * _workspaceName;
    NSString * _workspacePath;
}

@property (nonatomic, readonly) NSDate *billingCycleEndDate;
@property (nonatomic, readonly) NSNumber *billingCycleSupported;
@property (nonatomic, readonly) NSNumber *carrierSpaceSupported;
@property (nonatomic, readonly) NSNumber *metaDataForHomeCountry;
@property (nonatomic, readonly) NSNumber *metaDataForRoaming;
@property (nonatomic, readonly) NSDate *previousBillingCycleDate;
@property (nonatomic, readonly) NSNumber *subscriberTag;
@property (nonatomic, readonly) NSString *workspaceName;
@property (nonatomic, readonly) NSString *workspacePath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)billingCycleEndDate;
- (id)billingCycleSupported;
- (id)carrierSpaceSupported;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriberTag:(id)arg1 metaDataForHomeCountry:(id)arg2 metaDataForRoaming:(id)arg3 billingCycleEndDate:(id)arg4 previousBillingCycleDate:(id)arg5 billingCycleSupported:(id)arg6 carrierSpaceSupported:(id)arg7 workspaceName:(id)arg8 workspacePath:(id)arg9;
- (id)metaDataForHomeCountry;
- (id)metaDataForRoaming;
- (id)previousBillingCycleDate;
- (id)subscriberTag;
- (id)workspaceName;
- (id)workspacePath;

@end
