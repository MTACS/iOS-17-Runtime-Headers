
@interface PKMultiStackedLabelSource : NSObject <NSCopying, PKIdentifiable> {
    UIFont * _font;
    UIImage * _icon;
    NSString * _text;
    UIColor * _textColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)font;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)initWithText:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (id)textColor;

@end
