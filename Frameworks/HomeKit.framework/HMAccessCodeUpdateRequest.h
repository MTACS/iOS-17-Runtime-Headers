
@interface HMAccessCodeUpdateRequest : NSObject <HMAccessCodeModificationRequest> {
    HMAccessoryAccessCode * _accessoryAccessCode;
    HMAccessCodeValue * _updatedAccessCodeValue;
}

@property (readonly, copy) HMAccessoryAccessCode *accessoryAccessCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) HMAccessCodeValue *updatedAccessCodeValue;

- (void).cxx_destruct;
- (id)accessoryAccessCode;
- (id)createAccessCodeUpdateRequestValue;
- (id)initWithAccessoryAccessCode:(id)arg1 updatedAccessCodeValue:(id)arg2;
- (id)updatedAccessCodeValue;

@end
