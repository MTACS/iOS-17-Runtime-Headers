
@interface GTFileEntry : NSObject <NSSecureCoding> {
    NSString * _destination;
    unsigned long long  _fileSize;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) NSString *path;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithLink:(id)arg1 destination:(id)arg2;
- (id)initWithPath:(id)arg1 fileSize:(unsigned long long)arg2;
- (id)path;

@end
