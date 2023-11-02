
@interface _ICProactiveTrigger : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _attributedString;
    NSSet * _availableApps;
    NSString * _contentType;
    NSString * _context;
    TIInputContextHistory * _inputContextHistory;
    unsigned char  _triggerSourceType;
}

@property (nonatomic, readonly) NSDictionary *attributedString;
@property (nonatomic, retain) NSSet *availableApps;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) TIInputContextHistory *inputContextHistory;
@property (nonatomic, readonly) unsigned char triggerSourceType;

+ (bool)isEquivalentDictionary:(id)arg1 second:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedString;
- (id)availableApps;
- (id)contentType;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 inputContextHistory:(id)arg2 contentType:(id)arg3;
- (id)initWithSource:(unsigned char)arg1 attributes:(id)arg2;
- (id)inputContextHistory;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProactiveTrigger:(id)arg1;
- (void)setAvailableApps:(id)arg1;
- (unsigned char)triggerSourceType;

@end
