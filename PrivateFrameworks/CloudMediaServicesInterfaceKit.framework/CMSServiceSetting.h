
@interface CMSServiceSetting : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowExplicitContent;
    bool  _updateListeningHistory;
}

@property (nonatomic) bool allowExplicitContent;
@property (nonatomic) bool updateListeningHistory;

+ (id)settingDictionaryFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)allowExplicitContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllowExplicitContent:(bool)arg1;
- (void)setUpdateListeningHistory:(bool)arg1;
- (bool)updateListeningHistory;

@end
