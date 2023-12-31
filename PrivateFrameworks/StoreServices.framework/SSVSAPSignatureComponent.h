
@interface SSVSAPSignatureComponent : NSObject <NSCopying> {
    long long  _componentType;
    NSString * _key;
}

@property (nonatomic, readonly) long long componentType;
@property (nonatomic, readonly, copy) NSString *key;

- (void).cxx_destruct;
- (id)_dataToSignWithDataSource:(id)arg1;
- (long long)componentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataToSignWithRequestProperties:(id)arg1;
- (id)dataToSignWithURLRequest:(id)arg1;
- (id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2;
- (id)initWithComponentType:(long long)arg1 key:(id)arg2;
- (id)key;

@end
