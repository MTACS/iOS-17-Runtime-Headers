
@interface PPTopicMetadata : NSObject <MLFeatureProvider, NSCopying, NSSecureCoding> {
    unsigned short  _algorithmResultCount;
    unsigned short  _algorithmResultPosition;
    bool  _exactMatchInSourceText;
    unsigned short  _impressionCount;
    unsigned short  _occurrencesInSource;
}

@property (nonatomic, readonly) unsigned short algorithmResultCount;
@property (nonatomic, readonly) unsigned short algorithmResultPosition;
@property (nonatomic, readonly) bool exactMatchInSourceText;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) unsigned short impressionCount;
@property (nonatomic, readonly) unsigned short occurrencesInSource;

+ (bool)supportsSecureCoding;

- (unsigned short)algorithmResultCount;
- (unsigned short)algorithmResultPosition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)exactMatchInSourceText;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (unsigned short)impressionCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 algorithmResultPosition:(unsigned short)arg3 algorithmResultCount:(unsigned short)arg4 exactMatchInSourceText:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTopicMetadata:(id)arg1;
- (unsigned short)occurrencesInSource;

@end
