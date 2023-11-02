
@interface EMTGenderDescription : NSObject <NSCopying> {
    unsigned long long  _defaultGender;
    unsigned long long  _gender;
}

@property (nonatomic, readonly) unsigned long long defaultGender;
@property (nonatomic, readonly) unsigned long long gender;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)defaultGender;
- (unsigned long long)gender;
- (id)initWithGender:(unsigned long long)arg1 defaultGender:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end
