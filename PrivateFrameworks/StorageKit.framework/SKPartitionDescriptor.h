
@interface SKPartitionDescriptor : NSObject <NSSecureCoding> {
    SKVolumeDescriptor * _innerDescriptor;
    unsigned long long  _size;
}

@property (nonatomic, readonly, retain) SKFilesystem *filesystem;
@property (nonatomic, retain) SKVolumeDescriptor *innerDescriptor;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long size;

+ (id)descriptorWithVolume:(id)arg1;
+ (id)descriptorWithVolume:(id)arg1 size:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filesystem;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolume:(id)arg1 size:(unsigned long long)arg2;
- (id)innerDescriptor;
- (id)name;
- (void)setInnerDescriptor:(id)arg1;
- (unsigned long long)size;

@end
