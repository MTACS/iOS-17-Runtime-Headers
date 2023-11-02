
@interface HMAccessCodeRemoveRequest : NSObject <HMAccessCodeModificationRequest> {
    HMAccessoryAccessCode * _accessoryAccessCode;
}

@property (readonly) HMAccessoryAccessCode *accessoryAccessCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryAccessCode;
- (id)createAccessCodeRemoveRequestValue;
- (id)initWithAccessoryAccessCode:(id)arg1;

@end
