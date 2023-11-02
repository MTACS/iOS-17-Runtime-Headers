
@interface HFPlaceholder : NSObject <HFHomeKitObject> {
    NSUUID * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)uniqueIdentifier;

@end
