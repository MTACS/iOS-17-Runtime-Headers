
@interface WFWorkflowFileDescriptor : NSObject <NSCopying, NSSecureCoding> {
    WFFileRepresentation * _file;
    NSString * _name;
    NSString * _sourceAppIdentifier;
}

@property (nonatomic, readonly) WFFileRepresentation *file;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)initWithCoder:(id)arg1;
- (id)initWithFile:(id)arg1 name:(id)arg2;
- (id)initWithFile:(id)arg1 name:(id)arg2 sourceAppIdentifier:(id)arg3;
- (id)name;
- (id)sourceAppIdentifier;

@end
