
@interface ATXComplicationSet : NSObject <NSSecureCoding> {
    NSArray * _complications;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly, copy) NSArray *complications;
@property (nonatomic, readonly, copy) NSString *localizedTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplications:(id)arg1;
- (id)initWithComplications:(id)arg1 localizedTitle:(id)arg2;
- (id)localizedTitle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
