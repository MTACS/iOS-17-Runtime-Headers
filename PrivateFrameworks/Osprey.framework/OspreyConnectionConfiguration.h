
@interface OspreyConnectionConfiguration : NSObject <NSCopying> {
    NSURL * _connectionUrl;
    NSURLSessionConfiguration * _urlSessionConfiguration;
}

@property (nonatomic, retain) NSURL *connectionUrl;
@property (nonatomic, retain) NSURLSessionConfiguration *urlSessionConfiguration;

- (void).cxx_destruct;
- (id)connectionUrl;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setConnectionUrl:(id)arg1;
- (void)setUrlSessionConfiguration:(id)arg1;
- (id)urlSessionConfiguration;

@end
