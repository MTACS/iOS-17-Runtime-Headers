
@interface CTSIMToolkitItem : NSObject <NSCopying, NSSecureCoding> {
    bool  _selected;
    NSString * _text;
}

@property (nonatomic) bool selected;
@property (nonatomic, retain) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 selected:(bool)arg2;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
