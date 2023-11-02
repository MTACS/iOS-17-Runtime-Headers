
@interface _GKURLRequestDictionaryKey : NSObject <NSCopying> {
    NSURLRequest * _request;
}

@property (nonatomic, retain) NSURLRequest *request;

+ (id)keyWithRequest:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;

@end
