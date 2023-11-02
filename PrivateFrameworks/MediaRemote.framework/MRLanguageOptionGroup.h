
@interface MRLanguageOptionGroup : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsEmptySelection;
    MRLanguageOption * _defaultLanguageOption;
    bool  _hasAllowsEmptySelection;
    NSArray * _languageOptions;
}

@property (nonatomic) bool allowsEmptySelection;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, retain) MRLanguageOption *defaultLanguageOption;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasAllowsEmptySelection;
@property (nonatomic, copy) NSArray *languageOptions;
@property (nonatomic, readonly) _MRLanguageOptionGroupProtobuf *protobuf;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsEmptySelection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)defaultLanguageOption;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAllowsEmptySelection;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowsEmptySelection:(bool)arg3;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageOptions;
- (id)protobuf;
- (void)setAllowsEmptySelection:(bool)arg1;
- (void)setDefaultLanguageOption:(id)arg1;
- (void)setHasAllowsEmptySelection:(bool)arg1;
- (void)setLanguageOptions:(id)arg1;

@end
