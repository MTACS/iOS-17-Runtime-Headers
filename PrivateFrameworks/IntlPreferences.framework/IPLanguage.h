
@interface IPLanguage : NSObject {
    NSString * _identifier;
    NSString * _localizedStringForName;
    NSString * _name;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *localizedStringForName;
@property (nonatomic, readonly) IPLanguage *minimizedLanguage;
@property (nonatomic, retain) NSString *name;

+ (id)IPLanguagesWithLanguages:(id)arg1 normalize:(bool)arg2;
+ (id)languageWithIdentifier:(id)arg1;
+ (id)languageWithIdentifier:(id)arg1 normalize:(bool)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)localizedStringForName;
- (id)minimizedLanguage;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedStringForName:(id)arg1;
- (void)setName:(id)arg1;

@end
