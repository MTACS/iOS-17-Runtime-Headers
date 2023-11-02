
@interface QLCacheBlobInfo : NSObject {
    unsigned long long  length;
    unsigned long long  location;
}

@property unsigned long long length;
@property unsigned long long location;

- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)location;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;

@end
