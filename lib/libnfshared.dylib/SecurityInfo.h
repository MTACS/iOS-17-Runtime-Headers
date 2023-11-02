
@interface SecurityInfo : NSObject {
    long long  _type;
}

@property long long type;

+ (id)securityInfoArrayFromData:(id)arg1;

- (id)initWithType:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
