
@interface NSMorphologyPronoun : NSObject <NSCopying, NSSecureCoding> {
    NSMorphology * _dependentMorphology;
    NSMorphology * _morphology;
    NSString * _pronoun;
}

@property (readonly, copy) NSMorphology *dependentMorphology;
@property (readonly, copy) NSMorphology *morphology;
@property (readonly, copy) NSString *pronoun;

+ (bool)supportsSecureCoding;

- (id)_morphunConstraints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dependentMorphology;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPronoun:(id)arg1 morphology:(id)arg2 dependentMorphology:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)morphology;
- (id)pronoun;

@end
