
@interface CLKComplication : NSObject <NSCopying, NSSecureCoding, TLIdentifiable> {
    CLKUserActivity * _clkUserActivity;
    long long  _family;
    NSString * _identifier;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long family;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (id)complicationWithFamily:(long long)arg1 descriptor:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)tl_isEqualToIdentifiable:(id)arg1;
- (id)userActivity;
- (id)userInfo;

@end
