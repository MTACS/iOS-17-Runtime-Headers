
@interface SWCollaborationOptionsGroup : NSObject <NSCopying, NSSecureCoding> {
    NSString * _footer;
    NSString * _identifier;
    NSArray * _options;
    NSString * _title;
}

@property (nonatomic, copy) NSString *footer;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic, copy) NSString *title;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)optionsGroupWithIdentifier:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)footer;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 options:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCollaborationOptionsGroup:(id)arg1;
- (id)options;
- (void)setFooter:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
