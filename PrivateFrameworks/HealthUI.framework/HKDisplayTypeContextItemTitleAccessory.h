
@interface HKDisplayTypeContextItemTitleAccessory : NSObject <NSCopying> {
    UIColor * _color;
    NSString * _systemImageName;
}

@property (nonatomic, readonly, copy) UIColor *color;
@property (nonatomic, readonly, copy) NSString *systemImageName;

+ (id)titleAccessoryWithImagedNamed:(id)arg1 imageColor:(id)arg2;

- (void).cxx_destruct;
- (bool)_isEqualToTitleAccessory:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)systemImageName;

@end
