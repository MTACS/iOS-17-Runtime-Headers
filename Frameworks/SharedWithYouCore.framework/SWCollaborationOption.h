
@interface SWCollaborationOption : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSArray * _requiredOptionsIdentifiers;
    bool  _selected;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *requiredOptionsIdentifiers;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)optionWithTitle:(id)arg1 identifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 subtitle:(id)arg3 selected:(bool)arg4 requiredOptionsIdentifiers:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCollaborationOption:(id)arg1;
- (bool)isSelected;
- (id)requiredOptionsIdentifiers;
- (void)setRequiredOptionsIdentifiers:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
