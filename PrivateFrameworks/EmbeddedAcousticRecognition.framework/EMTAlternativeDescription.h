
@interface EMTAlternativeDescription : NSObject <NSCopying> {
    unsigned long long  _alternativeType;
    EMTGenderDescription * _genderDescription;
    EMTMeaningDescription * _meaningDescription;
}

@property (nonatomic, readonly) unsigned long long alternativeType;
@property (nonatomic, readonly) EMTGenderDescription *genderDescription;
@property (nonatomic, readonly) EMTMeaningDescription *meaningDescription;

- (void).cxx_destruct;
- (unsigned long long)alternativeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)genderDescription;
- (id)initWithGenderDescription:(id)arg1;
- (id)initWithMeaningDescription:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)meaningDescription;

@end
