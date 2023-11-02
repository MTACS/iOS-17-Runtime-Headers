
@interface REAccessoryDescription : NSObject <NSCoding, NSCopying> {
    UIColor * _backgroundColor;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
