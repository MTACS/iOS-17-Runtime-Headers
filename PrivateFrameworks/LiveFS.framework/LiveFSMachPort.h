
@interface LiveFSMachPort : NSObject <NSSecureCoding> {
    unsigned int  _machPort;
}

@property (readonly) unsigned int machPort;

+ (id)newByCopyingPort:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (unsigned int)machPort;

@end
