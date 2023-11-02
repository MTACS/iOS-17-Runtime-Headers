
@interface WFDisplay : NSObject <NSSecureCoding, WFNaming, WFVariableSerialization> {
    NSString * _UUID;
    NSString * _deviceName;
    NSString * _name;
    NSString * _serializationUUID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *serializationUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayUUID:(id)arg1 deviceName:(id)arg2 name:(id)arg3;
- (id)initWithDisplayUUID:(id)arg1 name:(id)arg2;
- (id)initWithDisplayUUID:(id)arg1 serializationUUID:(id)arg2 localizedName:(id)arg3;
- (id)name;
- (id)serializationUUID;
- (id)wfName;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)serializedRepresentation;

@end
