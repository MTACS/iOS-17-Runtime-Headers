
@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {
    bool  _canMultitap;
    bool  _diacriticForwardCompose;
    bool  _hasAccentKey;
    bool  _hasCandidateKey;
    NSString * _inputMode;
    bool  _isAlphabeticPlane;
    bool  _isKanaPlane;
    NSString * _layoutTag;
    long long  _userInterfaceIdiom;
}

@property (nonatomic) bool canMultitap;
@property (nonatomic) bool diacriticForwardCompose;
@property (nonatomic) bool hasAccentKey;
@property (nonatomic) bool hasCandidateKey;
@property (nonatomic, copy) NSString *inputMode;
@property (nonatomic) bool isAlphabeticPlane;
@property (nonatomic) bool isKanaPlane;
@property (nonatomic, copy) NSString *layoutTag;
@property (nonatomic, readonly) NSString *softwareLayout;
@property (nonatomic) long long userInterfaceIdiom;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canMultitap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)diacriticForwardCompose;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAccentKey;
- (bool)hasCandidateKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)inputMode;
- (bool)isAlphabeticPlane;
- (bool)isEqual:(id)arg1;
- (bool)isKanaPlane;
- (id)layoutTag;
- (void)setCanMultitap:(bool)arg1;
- (void)setDiacriticForwardCompose:(bool)arg1;
- (void)setHasAccentKey:(bool)arg1;
- (void)setHasCandidateKey:(bool)arg1;
- (void)setInputMode:(id)arg1;
- (void)setIsAlphabeticPlane:(bool)arg1;
- (void)setIsKanaPlane:(bool)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (id)softwareLayout;
- (long long)userInterfaceIdiom;

@end
