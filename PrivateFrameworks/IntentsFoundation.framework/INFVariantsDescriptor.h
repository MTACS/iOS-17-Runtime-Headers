
@interface INFVariantsDescriptor : NSObject <NSCopying> {
    unsigned long long  _gender;
    unsigned long long  _plurality;
}

@property (nonatomic, readonly) NSString *dictionaryKey;
@property (nonatomic) unsigned long long gender;
@property (nonatomic) unsigned long long plurality;

+ (id)variant;
+ (id)variantWithVariants:(unsigned long long)arg1;

- (id)append:(id)arg1 toString:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryKey;
- (unsigned long long)gender;
- (id)init;
- (id)initWithVariants:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)plurality;
- (void)setGender:(unsigned long long)arg1;
- (void)setPlurality:(unsigned long long)arg1;
- (id)variantByRemovingOneAttribute;

@end
