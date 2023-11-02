
@interface NEFilterProviderConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _controlProviderInitialized;
    NSString * _dataProviderDesignatedRequirement;
    NSURL * _dataProviderURL;
    bool  _disableDefaultDrop;
    bool  _filterBrowsers;
    NSString * _filterDataProviderBundleIdentifier;
    NSString * _filterPacketProviderBundleIdentifier;
    bool  _filterPackets;
    bool  _filterSockets;
    NSData * _identityReference;
    NSString * _keychainAccessGroup;
    NSString * _organization;
    NSString * _packetProviderDesignatedRequirement;
    NSURL * _packetProviderURL;
    NSData * _passwordReference;
    NSString * _pluginType;
    bool  _preserveExistingConnections;
    NSString * _serverAddress;
    NSString * _username;
    NSDictionary * _vendorConfiguration;
}

@property (copy) NSString *dataProviderDesignatedRequirement;
@property (copy) NSURL *dataProviderURL;
@property bool disableDefaultDrop;
@property bool filterBrowsers;
@property (copy) NSString *filterDataProviderBundleIdentifier;
@property (copy) NSString *filterPacketProviderBundleIdentifier;
@property bool filterPackets;
@property bool filterSockets;
@property (copy) NSData *identityReference;
@property (copy) NSString *organization;
@property (copy) NSString *packetProviderDesignatedRequirement;
@property (copy) NSURL *packetProviderURL;
@property (copy) NSData *passwordReference;
@property (copy) NSString *pluginType;
@property bool preserveExistingConnections;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSDictionary *vendorConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataProviderDesignatedRequirement;
- (id)dataProviderURL;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)disableDefaultDrop;
- (void)encodeWithCoder:(id)arg1;
- (bool)filterBrowsers;
- (id)filterDataProviderBundleIdentifier;
- (id)filterPacketProviderBundleIdentifier;
- (bool)filterPackets;
- (bool)filterSockets;
- (id)identityReference;
- (id)initWithCoder:(id)arg1;
- (id)organization;
- (id)packetProviderDesignatedRequirement;
- (id)packetProviderURL;
- (id)passwordReference;
- (id)pluginType;
- (bool)preserveExistingConnections;
- (id)serverAddress;
- (void)setDataProviderDesignatedRequirement:(id)arg1;
- (void)setDataProviderURL:(id)arg1;
- (void)setDisableDefaultDrop:(bool)arg1;
- (void)setFilterBrowsers:(bool)arg1;
- (void)setFilterDataProviderBundleIdentifier:(id)arg1;
- (void)setFilterPacketProviderBundleIdentifier:(id)arg1;
- (void)setFilterPackets:(bool)arg1;
- (void)setFilterSockets:(bool)arg1;
- (void)setIdentityReference:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setPacketProviderDesignatedRequirement:(id)arg1;
- (void)setPacketProviderURL:(id)arg1;
- (void)setPasswordReference:(id)arg1;
- (void)setPluginType:(id)arg1;
- (void)setPreserveExistingConnections:(bool)arg1;
- (void)setServerAddress:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setVendorConfiguration:(id)arg1;
- (id)username;
- (id)vendorConfiguration;

@end
