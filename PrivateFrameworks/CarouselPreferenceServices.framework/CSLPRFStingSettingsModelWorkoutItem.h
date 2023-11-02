
@interface CSLPRFStingSettingsModelWorkoutItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _subtitle;
    NSString * _title;
    NSString * _workoutIdentifier;
}

@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *workoutIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWorkoutIdentifier:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)workoutIdentifier;

@end
