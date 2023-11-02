
@interface MXCallStackFrame : NSObject <NSSecureCoding> {
    NSNumber * _address;
    NSString * _binaryName;
    NSUUID * _binaryUUID;
    NSNumber * _offsetInBinary;
    NSNumber * _sampleCount;
    NSArray * _subFrames;
}

@property (readonly) NSNumber *address;
@property (readonly) NSString *binaryName;
@property (readonly) NSUUID *binaryUUID;
@property (readonly) NSNumber *offsetInBinary;
@property (readonly) NSNumber *sampleCount;
@property (retain) NSArray *subFrames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)binaryName;
- (id)binaryUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinaryName:(id)arg1 binaryUUID:(id)arg2 address:(id)arg3 binaryOffset:(id)arg4 sampleCount:(id)arg5 withDepth:(unsigned long long)arg6 subFrameArray:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)offsetInBinary;
- (id)sampleCount;
- (void)setSubFrames:(id)arg1;
- (id)subFrames;
- (id)toDictionary;

@end
