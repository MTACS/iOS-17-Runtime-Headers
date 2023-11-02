
@interface HMIPersonsModelPrediction : HMFObject {
    NSNumber * _confidence;
    NSUUID * _linkedEntityUUID;
    NSUUID * _personUUID;
    NSUUID * _sourceUUID;
}

@property (readonly) NSNumber *confidence;
@property (readonly) NSUUID *linkedEntityUUID;
@property (readonly) NSUUID *personUUID;
@property (readonly) NSUUID *sourceUUID;

- (void).cxx_destruct;
- (id)confidence;
- (id)initWithSourceUUID:(id)arg1 personUUID:(id)arg2 confidence:(id)arg3 linkedEntityUUID:(id)arg4;
- (id)linkedEntityUUID;
- (id)personUUID;
- (id)sourceUUID;

@end
