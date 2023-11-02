
@interface WFUnsupportedContentLocation : WFContentLocation <NSCopying, NSSecureCoding, WFSerializableContent> {
    NSDictionary * _backingSerializedRepresentation;
}

@property (nonatomic, readonly) NSDictionary *backingSerializedRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)locationWithIdentifier:(id)arg1 serializedRepresentation:(id)arg2;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backingSerializedRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 serializedRepresentation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (id)wfSerializedRepresentation;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)icon;

@end
