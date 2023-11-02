
@interface CRKASMConcreteLocation : NSObject <CRKASMLocation> {
    NSString * _identifier;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBackingLocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
