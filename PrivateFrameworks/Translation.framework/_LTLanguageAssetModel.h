
@interface _LTLanguageAssetModel : NSObject <NSSecureCoding, _LTAssetProgressReporting> {
    NSString * _displayName;
    NSLocale * _locale;
    NSString * _ltIdentifier;
    _LTAssetProgress * _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifierForDownloads;
@property (nonatomic, readonly, copy) _LTLanguageInstallationStatus *installationStatus;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly, copy) NSString *ltIdentifier;
@property (nonatomic, readonly) _LTAssetProgress *progress;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifierForDownloads;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstallationStatus:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 progress:(id)arg2;
- (id)initWithLocale:(id)arg1 state:(long long)arg2;
- (id)installationStatus;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)ltIdentifier;
- (id)progress;
- (long long)state;

@end
