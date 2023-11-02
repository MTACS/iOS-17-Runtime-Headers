
@interface Settings.TitlebarConfiguration : NSObject <NSSecureCoding> {
    void cloudSyncConfiguration;
    void imageLabels;
    void imageSymbols;
    void subtitle;
    void title;
    void useCloudSyncConfiguration;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
