
@interface PKPassIngestionPayload : NSObject <NSSecureCoding> {
    NSData * _data;
    PKFileDescriptorXPCContainer * _fd;
    PKPass * _pass;
    PKPassIngestionProperties * _properties;
}

@property (nonatomic, retain) PKPassIngestionProperties *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithData:(id)arg1 fileDescriptor:(id)arg2 pass:(id)arg3;
- (id)createPass;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithPass:(id)arg1;
- (void)invalidate;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
