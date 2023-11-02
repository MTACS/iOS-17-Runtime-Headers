
@interface HMAccessCodeAddRequest : NSObject <HMAccessCodeModificationRequest> {
    HMAccessCodeValue * _accessCodeValue;
    HMAccessory * _accessory;
}

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessCodeValue;
- (id)accessory;
- (id)createAccessCodeAddRequestValue;
- (id)initWithAccessCodeValue:(id)arg1 accessory:(id)arg2;

@end
