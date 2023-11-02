
@interface GTReplayShaderDebugPostTessellationVertex : GTReplayShaderDebugRequest <NSSecureCoding> {
    unsigned int  _amplificationID;
    unsigned int  _instanceID;
    NSArray * _patchIDs;
}

@property (nonatomic) unsigned int amplificationID;
@property (nonatomic) unsigned int instanceID;
@property (nonatomic, retain) NSArray *patchIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)amplificationID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)instanceID;
- (id)patchIDs;
- (void)setAmplificationID:(unsigned int)arg1;
- (void)setInstanceID:(unsigned int)arg1;
- (void)setPatchIDs:(id)arg1;

@end
