
@interface GCMotionXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    bool  _initialSensorsActive;
    GCMotionXPCProxyClientEndpoint * _materializedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 initialSensorsActive:(bool)arg2;
- (id)materializeWithContext:(id)arg1;

@end
