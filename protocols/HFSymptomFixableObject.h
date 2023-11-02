
@protocol HFSymptomFixableObject <NSObject, HFSymptomsHandlerVendor, HFAccessoryVendor, HFHomeKitObject>

@required

- (NSSet *)accessories;
- (HMSymptomsHandler *)symptomsHandler;
- (NSUUID *)uniqueIdentifier;

@end
