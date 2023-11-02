
@interface WFContextualWorkflowDescriptor : NSObject <NSCopying, NSSecureCoding> {
    WFWorkflowDescriptor * _descriptor;
    <WFPropertyListObject> * _serializedRepresentation;
}

@property (nonatomic, readonly) WFWorkflowDescriptor *descriptor;
@property (nonatomic, readonly) <WFPropertyListObject> *serializedRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1 serializedRepresentation:(id)arg2;
- (id)serializedRepresentation;

@end
