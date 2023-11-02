
@interface _PASTempfileDescr : NSObject <NSCopying> {
    int  _fd;
    NSString * _path;
}

@property (nonatomic, readonly) int fd;
@property (nonatomic, readonly) NSString *path;

+ (id)tempfileDescrWithFd:(int)arg1 path:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)fd;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFd:(int)arg1 path:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTempfileDescr:(id)arg1;
- (id)path;

@end
