
@interface PXSettingsConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _archive;
    NSString * _name;
    PXSettings * _settings;
}

@property (nonatomic, readonly) NSDictionary *archive;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) PXSettings *settings;

+ (id)configurationsFromSharableString:(id)arg1;
+ (id)sharableStringForConfigurations:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archive;
- (id)copyWithName:(id)arg1;
- (id)copyWithUpdatedSettingsValues;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 settings:(id)arg2;
- (id)initWithName:(id)arg1 settings:(id)arg2 archive:(id)arg3;
- (id)name;
- (id)settings;

@end
