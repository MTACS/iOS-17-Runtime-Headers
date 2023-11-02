
@interface HPSSiriAvailableLanguages : HPSSetting

@property (nonatomic, readonly, copy) NSArray *languages;

+ (bool)supportsSecureCoding;
+ (id)valueClasses;

- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 languages:(id)arg2;
- (id)languages;

@end
