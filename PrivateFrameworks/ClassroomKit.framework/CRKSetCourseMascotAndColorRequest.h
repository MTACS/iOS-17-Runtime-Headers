
@interface CRKSetCourseMascotAndColorRequest : CATTaskRequest {
    unsigned long long  _colorType;
    DMFControlGroupIdentifier * _courseIdentifier;
    unsigned long long  _mascotType;
}

@property (nonatomic) unsigned long long colorType;
@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic) unsigned long long mascotType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)colorType;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)mascotType;
- (void)setColorType:(unsigned long long)arg1;
- (void)setCourseIdentifier:(id)arg1;
- (void)setMascotType:(unsigned long long)arg1;

@end