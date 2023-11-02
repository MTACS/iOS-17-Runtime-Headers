
@interface HMDLegacyV4ModelInfo : HMFObject {
    Class  _hmdModelClass;
    NSString * _hmdTypeName;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) Class hmdModelClass;
@property (nonatomic, readonly) NSString *hmdTypeName;
@property (nonatomic, readonly) NSDictionary *properties;

- (void).cxx_destruct;
- (Class)hmdModelClass;
- (id)hmdTypeName;
- (id)initWithClass:(Class)arg1;
- (id)properties;

@end
