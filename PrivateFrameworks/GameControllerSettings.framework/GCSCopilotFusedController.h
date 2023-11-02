
@interface GCSCopilotFusedController : NSObject <GCSJSONSerializable, NSSecureCoding> {
    NSString * _copilotIdentifier;
    NSString * _fusedControllerIdentifier;
    NSDate * _modifiedDate;
    NSString * _pilotIdentifier;
}

@property (nonatomic, readonly, copy) NSString *copilotIdentifier;
@property (nonatomic, readonly, copy) NSString *fusedControllerIdentifier;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, readonly) NSDate *modifiedDate;
@property (nonatomic, readonly, copy) NSString *pilotIdentifier;

+ (id)archivalClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copilotIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fusedControllerIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFusedControllerIdentifier:(id)arg1 pilotIdentifier:(id)arg2 copilotIdentifier:(id)arg3;
- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;
- (id)modifiedDate;
- (id)pilotIdentifier;

@end
