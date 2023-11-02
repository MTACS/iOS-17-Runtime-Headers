
@interface ENActiveEntity : NSObject <NSCopying, NSSecureCoding> {
    int  _activeStatus;
    ENEntity * _entity;
}

@property (nonatomic) int activeStatus;
@property (nonatomic, copy) ENEntity *entity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)activeStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntity:(id)arg1 activeStatus:(int)arg2;
- (bool)isEqual:(id)arg1;
- (void)setActiveStatus:(int)arg1;
- (void)setEntity:(id)arg1;

@end
