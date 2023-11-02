
@interface CTSIMToolkitMenu : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _subTitles;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *subTitles;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSubTitles:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subTitles;
- (id)title;

@end
