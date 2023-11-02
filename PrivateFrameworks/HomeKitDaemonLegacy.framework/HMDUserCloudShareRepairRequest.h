
@interface HMDUserCloudShareRepairRequest : HMDUserCloudShareRequest {
    HMUserCloudShareRepairInfo * _repairInfo;
}

@property (readonly) HMUserCloudShareRepairInfo *repairInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)arg1 containerID:(id)arg2 home:(id)arg3 repairInfo:(id)arg4;
- (id)repairInfo;

@end
