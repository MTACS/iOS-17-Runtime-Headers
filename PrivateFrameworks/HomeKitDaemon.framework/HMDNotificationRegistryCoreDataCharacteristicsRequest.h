
@interface HMDNotificationRegistryCoreDataCharacteristicsRequest : HMFObject {
    NSArray * _characteristics;
    HMDNotificationRegistryCharacteristicsRequest * _request;
}

@property (readonly) NSArray *characteristics;
@property (readonly) HMDNotificationRegistryCharacteristicsRequest *request;

- (void).cxx_destruct;
- (id)characteristics;
- (id)initWithRequest:(id)arg1 characteristics:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)request;

@end
