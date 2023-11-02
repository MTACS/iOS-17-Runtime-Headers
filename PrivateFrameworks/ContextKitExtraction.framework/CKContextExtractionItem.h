
@interface CKContextExtractionItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _extractionSourceClassName;
    NSString * _identifier;
    bool  _onScreen;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *extractionSourceClassName;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extractionSourceClassName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(unsigned long long)arg2 bundleIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isOnScreen;
- (void)setBundleIdentifier:(id)arg1;
- (void)setExtractionSourceClassName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)title;
- (id)toJSONSerializableDictionary;
- (unsigned long long)type;

@end
