
@interface PMLPlanDescriptor : NSObject <NSCopying> {
    NSString * _locale;
    NSString * _name;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;

+ (id)descriptorFromPlanId:(id)arg1;
+ (bool)isValidPlanId:(id)arg1;
+ (id)planIdFromString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)name;
- (id)version;

@end
