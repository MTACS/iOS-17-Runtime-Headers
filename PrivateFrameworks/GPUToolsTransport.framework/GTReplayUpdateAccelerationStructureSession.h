
@interface GTReplayUpdateAccelerationStructureSession : GTReplayRequest <NSSecureCoding> {
    NSData * _data;
    unsigned long long  _sessionsID;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic) unsigned long long sessionsID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)sessionsID;
- (void)setData:(id)arg1;
- (void)setSessionsID:(unsigned long long)arg1;

@end
