
@interface CSLPRFStingSettingsModelData : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _actionsDictionary;
    NSDictionary * _secondaryActionsDictionary;
    NSDictionary * _shortcutsDictionary;
    NSDictionary * _startWorkoutsDictionary;
    NSString * _version;
}

@property (nonatomic, retain) NSDictionary *actionsDictionary;
@property (nonatomic, retain) NSDictionary *secondaryActionsDictionary;
@property (nonatomic, retain) NSDictionary *shortcutsDictionary;
@property (nonatomic, retain) NSDictionary *startWorkoutsDictionary;
@property (nonatomic, retain) NSString *version;

+ (id)fromExportData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionsDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)secondaryActionsDictionary;
- (void)setActionsDictionary:(id)arg1;
- (void)setSecondaryActionsDictionary:(id)arg1;
- (void)setShortcutsDictionary:(id)arg1;
- (void)setStartWorkoutsDictionary:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)shortcutsDictionary;
- (id)startWorkoutsDictionary;
- (id)toExportData;
- (id)version;

@end
