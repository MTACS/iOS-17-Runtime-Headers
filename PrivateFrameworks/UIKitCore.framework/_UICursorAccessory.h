
@interface _UICursorAccessory : NSObject <NSSecureCoding> {
    NSString * _groupIdentifier;
    NSString * _identifier;
    bool  _interactive;
    bool  _large;
    double  _preferredWidth;
    unsigned long long  _style;
}

@property (nonatomic, copy) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInteractive, nonatomic) bool interactive;
@property (getter=isLarge, nonatomic) bool large;
@property (nonatomic) double preferredWidth;
@property (nonatomic) unsigned long long style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deleteCursorAccessory;
- (id)_dictationCursorAccessory;
- (id)_inputModeCursorAccessory;
- (id)_modifierKeyCursorAccessory;
- (id)description;
- (id)descriptionBuilder;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (bool)isLarge;
- (double)preferredWidth;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setLarge:(bool)arg1;
- (void)setPreferredWidth:(double)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
