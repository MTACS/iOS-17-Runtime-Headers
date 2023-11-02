
@interface BMFileAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString * _filename;
    unsigned long long  _mode;
    NSString * _path;
    unsigned long long  _protectionClass;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) unsigned long long protectionClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filename;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 mode:(unsigned long long)arg2 protectionClass:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mode;
- (id)path;
- (unsigned long long)protectionClass;

@end
