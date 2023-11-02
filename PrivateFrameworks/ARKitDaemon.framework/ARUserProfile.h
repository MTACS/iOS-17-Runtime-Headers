
@interface ARUserProfile : NSObject {
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long type;

+ (id)defaultProfile;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
