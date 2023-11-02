
@interface SiriKitRuntime.ServerBoundContextUpdateContainer : NSObject <AFContextSnapshot, NSSecureCoding> {
    void contextUpdate;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

@end
