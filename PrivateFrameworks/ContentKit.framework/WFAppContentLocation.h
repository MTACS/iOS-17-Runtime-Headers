
@interface WFAppContentLocation : WFContentLocation <NSCopying, NSSecureCoding, WFSerializableContent> {
    INAppDescriptor * _appDescriptor;
    NSString * _localizedTitle;
    unsigned long long  _managedLevel;
    NSDictionary * _serializedAppDescriptor;
    NSString * localizedTitle;
}

@property (nonatomic, readonly) INAppDescriptor *appDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long managedLevel;
@property (nonatomic, readonly) NSDictionary *serializedAppDescriptor;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)locationWithAppDescriptor:(id)arg1;
+ (id)locationWithAppDescriptor:(id)arg1 managedLevel:(unsigned long long)arg2;
+ (id)locationWithAppDescriptor:(id)arg1 managedLevel:(unsigned long long)arg2 promptingBehaviour:(unsigned long long)arg3;
+ (id)locationWithAppDescriptor:(id)arg1 promptingBehaviour:(unsigned long long)arg2;
+ (id)locationWithSystemAppBundleIdentifier:(id)arg1;
+ (id)locationWithSystemAppBundleIdentifier:(id)arg1 promptingBehaviour:(unsigned long long)arg2;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)platformFileManagerLocation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)app;
- (id)appDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAppDescriptor:(id)arg1 serializedAppDescriptor:(id)arg2 identifier:(id)arg3 managedLevel:(unsigned long long)arg4 promptingBehaviour:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedMDMDescription;
- (id)localizedTitle;
- (unsigned long long)managedLevel;
- (id)serializedAppDescriptor;
- (id)wfSerializedRepresentation;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)icon;

@end
