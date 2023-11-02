
@interface HMFMutableHTTPResponse : HMFHTTPResponse

@property (nonatomic, copy) NSData *body;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBody:(id)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;

@end
