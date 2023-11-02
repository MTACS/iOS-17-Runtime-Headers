
@interface _NSHTTPAlternativeServicesFilter : NSObject <NSCopying> {
    NSString * _host;
    NSString * _partition;
    long long  _port;
}

@property (nonatomic, retain) NSString *host;
@property (nonatomic, retain) NSString *partition;
@property (nonatomic) long long port;

+ (id)emptyFilter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)host;
- (id)partition;
- (long long)port;
- (void)setHost:(id)arg1;
- (void)setPartition:(id)arg1;
- (void)setPort:(long long)arg1;

@end
