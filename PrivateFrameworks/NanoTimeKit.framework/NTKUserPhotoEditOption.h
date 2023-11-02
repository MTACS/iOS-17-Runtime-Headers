
@interface NTKUserPhotoEditOption : NTKEditOption {
    bool  _usesDefaultPhoto;
}

@property (nonatomic) bool usesDefaultPhoto;

+ (id)optionUsingDefaultPhoto:(bool)arg1 forDevice:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidOption;
- (void)setUsesDefaultPhoto:(bool)arg1;
- (bool)usesDefaultPhoto;

@end
