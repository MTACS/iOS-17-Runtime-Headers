
@interface CVMLImageprintObservation_LegacySupportDoNotChange : CVMLObservation_LegacySupportDoNotChange {
    NSUUID * _identifier;
    MPImageDescriptor_LegacySupportDoNotChange * _imageprintDescriptor;
    NSString * _imageprintType;
    NSString * _imageprintVersion;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)serializeAsVNImageprintStateAndReturnError:(id*)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;

@end
