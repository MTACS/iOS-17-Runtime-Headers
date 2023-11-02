
@interface _GCGamepadEventFusionDescription : NSObject <_GCGamepadEventSourceDescription> {
    _GCGamepadEventFusionConfig * _config;
    _GCGamepadEventFusion * _materializedObject;
    NSArray * _sourcesDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 sources:(id)arg2;
- (id)materializeWithContext:(id)arg1;

@end
