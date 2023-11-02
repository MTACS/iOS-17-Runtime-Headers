
@interface CMIOExtensionScheduledOutput : NSObject <NSCopying, NSSecureCoding> {
    NSString * _description;
    unsigned long long  _hostTimeInNanoseconds;
    unsigned long long  _sequenceNumber;
}

@property (readonly) unsigned long long hostTimeInNanoseconds;
@property (readonly) unsigned long long sequenceNumber;

+ (id)scheduledOutputWithSequenceNumber:(unsigned long long)arg1 hostTimeInNanoseconds:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCDictionary;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hostTimeInNanoseconds;
- (id)initWithCoder:(id)arg1;
- (id)initWithSequenceNumber:(unsigned long long)arg1 hostTimeInNanoseconds:(unsigned long long)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sequenceNumber;

@end
