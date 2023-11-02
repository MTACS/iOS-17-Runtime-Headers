
@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying> {
    AMSURLRequestProperties * _properties;
}

@property (nonatomic, retain) AMSURLRequestProperties *properties;

+ (id)logableDescriptionForRequest:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (id)initWithRequest:(id)arg1 properties:(id)arg2;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
