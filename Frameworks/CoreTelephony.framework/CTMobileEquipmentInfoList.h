
@interface CTMobileEquipmentInfoList : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _meInfoList;
}

@property (nonatomic, retain) NSArray *meInfoList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)meInfoList;
- (void)setMeInfoList:(id)arg1;

@end
