
@interface WFPausedShortcutData : NSObject <NSSecureCoding> {
    WFWorkflowRunningContext * _context;
    NSData * _contextData;
    WFWorkflowRunDescriptor * _descriptor;
    NSData * _descriptorData;
}

@property (nonatomic, retain) WFWorkflowRunningContext *context;
@property (nonatomic, retain) NSData *contextData;
@property (nonatomic, retain) WFWorkflowRunDescriptor *descriptor;
@property (nonatomic, retain) NSData *descriptorData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)contextData;
- (id)descriptor;
- (id)descriptorData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 descriptor:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setContextData:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setDescriptorData:(id)arg1;

@end
