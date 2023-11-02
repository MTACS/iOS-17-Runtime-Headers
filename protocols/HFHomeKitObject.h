
@protocol HFHomeKitObject <NSObject>

@required

- (NSUUID *)uniqueIdentifier;

@optional

- (bool)hf_isValidObject;

@end
