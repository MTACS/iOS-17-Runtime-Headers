
@interface SiriKitRuntime.ServerPromptData : NSObject <AFContextSnapshot, NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  legacyNLContext;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

@end
