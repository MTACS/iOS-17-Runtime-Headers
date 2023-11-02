
@interface AVTCoreModelPreset : NSObject {
    bool  _defaultPreset;
    AVTPreset * _preset;
    NSDictionary * _tags;
}

@property (getter=isDefaultPreset, nonatomic, readonly) bool defaultPreset;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedPairedName;
@property (nonatomic, readonly) AVTPreset *preset;
@property (nonatomic, readonly, copy) NSDictionary *tags;

+ (id)tagSetFromPreset:(id)arg1;

- (void).cxx_destruct;
- (id)copyForPairedCategory:(long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPreset:(id)arg1;
- (id)initWithPreset:(id)arg1 isDefaultPreset:(bool)arg2;
- (bool)isDefaultPreset;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)localizedPairedName;
- (id)preset;
- (id)tags;

@end
