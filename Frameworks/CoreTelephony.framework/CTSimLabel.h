
@interface CTSimLabel : NSObject <NSCopying, NSSecureCoding> {
    bool  _didSetup;
    NSString * _text;
    NSString * _unique_id;
}

@property (nonatomic) bool didSetup;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *unique_id;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didSetup;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 andText:(id)arg2 andDidSetup:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (void)setDidSetup:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setUnique_id:(id)arg1;
- (id)text;
- (id)unique_id;

@end
