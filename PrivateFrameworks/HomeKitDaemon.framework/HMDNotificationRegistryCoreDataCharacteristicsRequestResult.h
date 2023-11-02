
@interface HMDNotificationRegistryCoreDataCharacteristicsRequestResult : HMFObject {
    HMDNotificationRegistryCoreDataCharacteristicsRequest * _coreDataRequest;
    bool  _didModify;
    bool  _didSucceed;
    NSArray * _modifiedCharacteristics;
}

@property (readonly) HMDNotificationRegistryCoreDataCharacteristicsRequest *coreDataRequest;
@property (readonly) bool didModify;
@property (readonly) bool didSucceed;
@property (readonly) NSArray *modifiedCharacteristics;

- (void).cxx_destruct;
- (id)coreDataRequest;
- (bool)didModify;
- (bool)didSucceed;
- (id)initWithCoreDataRequest:(id)arg1 didSucceed:(bool)arg2 didModify:(bool)arg3 modifiedCharacteristics:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)modifiedCharacteristics;

@end
