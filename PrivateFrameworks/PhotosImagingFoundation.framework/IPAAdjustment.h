
@interface IPAAdjustment : NSObject <NSCopying> {
    NSString * _identifier;
    NSDictionary * _settings;
    IPAAdjustmentVersion * _version;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDictionary *settings;
@property (nonatomic, retain) IPAAdjustmentVersion *version;

- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjustment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)settings;
- (id)version;

@end
