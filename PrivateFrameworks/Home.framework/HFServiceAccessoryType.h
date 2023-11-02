
@interface HFServiceAccessoryType : HFAccessoryType {
    NSString * _serviceType;
    NSString * _subtype;
}

@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) NSString *subtype;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithServiceType:(id)arg1 subtype:(id)arg2;
- (id)serviceType;
- (id)subtype;

@end
