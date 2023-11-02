
@interface _LTLanguageInstallationStatus : NSObject <NSSecureCoding> {
    NSString * _localeIdentifier;
    _LTAssetProgress * _progress;
}

@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic, retain) _LTAssetProgress *progress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1 offlineState:(long long)arg2;
- (id)initWithLocaleIdentifier:(id)arg1 progress:(id)arg2;
- (id)localeIdentifier;
- (long long)offlineState;
- (id)progress;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setProgress:(id)arg1;

@end
