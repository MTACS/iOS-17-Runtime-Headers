
@interface CDMServiceGraphProtoBackedCommand : CDMServiceGraphCommand

+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggingRequestID;

@end
