
@interface _EXPersona : NSObject <NSCopying, NSSecureCoding> {
    NSString * _personaUniqueString;
}

@property (nonatomic, readonly) NSString *personaUniqueString;

+ (id)currentPersona;
+ (id)defaultPersona;
+ (id)personaWithPersonaUniqueString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonaUniqueString:(id)arg1;
- (id)personaUniqueString;

@end
