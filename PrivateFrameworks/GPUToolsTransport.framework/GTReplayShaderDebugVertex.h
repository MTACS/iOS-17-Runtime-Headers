
@interface GTReplayShaderDebugVertex : GTReplayShaderDebugRequest <NSSecureCoding> {
    unsigned int  _amplificationID;
    unsigned int  _instanceID;
    NSArray * _vertexIDs;
}

@property (nonatomic) unsigned int amplificationID;
@property (nonatomic) unsigned int instanceID;
@property (nonatomic, retain) NSArray *vertexIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)amplificationID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)instanceID;
- (void)setAmplificationID:(unsigned int)arg1;
- (void)setInstanceID:(unsigned int)arg1;
- (void)setVertexIDs:(id)arg1;
- (id)vertexIDs;

@end
