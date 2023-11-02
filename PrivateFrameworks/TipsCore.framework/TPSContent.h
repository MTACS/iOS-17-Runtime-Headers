
@interface TPSContent : TPSSerializableObject <NAIdentifiable, NSCopying, NSSecureCoding> {
    TPSAssets * _assets;
    bool  _bodyContainsLink;
    NSArray * _bodyContent;
    NSString * _bodyText;
    long long  _labelStyle;
    NSString * _title;
    NSArray * _titleContent;
}

@property (nonatomic, copy) TPSAssets *assets;
@property (nonatomic) bool bodyContainsLink;
@property (nonatomic, copy) NSArray *bodyContent;
@property (nonatomic, copy) NSString *bodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long labelStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleContent;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assets;
- (bool)bodyContainsLink;
- (id)bodyContent;
- (id)bodyText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)labelStyle;
- (void)setAssets:(id)arg1;
- (void)setBodyContainsLink:(bool)arg1;
- (void)setBodyContent:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setLabelStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleContent:(id)arg1;
- (id)title;
- (id)titleContent;

@end
