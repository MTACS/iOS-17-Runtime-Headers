
@interface HMBLocalZoneIDUnshared : HMFObject <HMBLocalZoneID> {
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *token;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)labels;
- (id)name;
- (id)token;

@end
