
@interface WFObjectRepresentation : WFRepresentation {
    id  _object;
    NSString * _wfName;
}

@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) NSString *specifiedName;
@property (nonatomic, readonly) NSString *wfName;
@property (nonatomic, readonly) WFObjectType *wfType;

+ (id)object:(id)arg1;
+ (id)object:(id)arg1 named:(id)arg2;
+ (id)objects:(id)arg1;
+ (id)objects:(id)arg1 named:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 named:(id)arg2;
- (bool)isEncodable;
- (id)object;
- (id)specifiedName;
- (id)wfName;
- (id)wfType;

@end
