
@interface SiriKitRuntime.StartExecutionTurn : NSObject <NSSecureCoding> {
    void executionRequestId;
    void isMUXEnabled;
    void isTapToEdit;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
