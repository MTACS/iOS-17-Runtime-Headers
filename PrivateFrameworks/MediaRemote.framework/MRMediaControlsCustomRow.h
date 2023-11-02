
@interface MRMediaControlsCustomRow : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _titleOverride;
    UTType * _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *titleOverride;
@property (nonatomic, copy) UTType *type;

+ (id)rowWithType:(id)arg1 titleOverride:(id)arg2 identifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitleOverride:(id)arg1;
- (void)setType:(id)arg1;
- (id)titleOverride;
- (id)type;

@end
