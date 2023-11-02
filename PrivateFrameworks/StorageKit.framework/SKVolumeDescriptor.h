
@interface SKVolumeDescriptor : NSObject <NSSecureCoding> {
    SKFilesystem * _filesystem;
    NSString * _name;
}

@property (nonatomic, retain) SKFilesystem *filesystem;
@property (nonatomic, copy) NSString *name;

+ (id)descriptorWithName:(id)arg1 filesystem:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filesystem;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 filesystem:(id)arg2;
- (id)name;
- (id)redactedDescription;
- (void)setFilesystem:(id)arg1;
- (void)setName:(id)arg1;

@end
