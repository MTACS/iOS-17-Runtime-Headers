
@interface RTIDataPayload : NSObject <NSSecureCoding> {
    NSData * _data;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) unsigned long long version;

+ (id)payloadWithData:(id)arg1;
+ (id)payloadWithData:(id)arg1 version:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 version:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setData:(id)arg1;
- (unsigned long long)version;

@end
