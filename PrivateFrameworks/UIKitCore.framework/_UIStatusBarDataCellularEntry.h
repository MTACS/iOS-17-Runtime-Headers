
@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry {
    NSString * _badgeString;
    bool  _callForwardingEnabled;
    NSString * _crossfadeString;
    bool  _isBootstrapCellular;
    bool  _showsSOSWhenDisabled;
    bool  _sosAvailable;
    NSString * _string;
    long long  _type;
    bool  _wifiCallingEnabled;
}

@property (nonatomic, copy) NSString *badgeString;
@property (nonatomic) bool callForwardingEnabled;
@property (nonatomic, copy) NSString *crossfadeString;
@property (nonatomic) bool isBootstrapCellular;
@property (nonatomic) bool showsSOSWhenDisabled;
@property (nonatomic) bool sosAvailable;
@property (nonatomic, copy) NSString *string;
@property (nonatomic) long long type;
@property (nonatomic) bool wifiCallingEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)badgeString;
- (bool)callForwardingEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossfadeString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isBootstrapCellular;
- (bool)isEqual:(id)arg1;
- (void)setBadgeString:(id)arg1;
- (void)setCallForwardingEnabled:(bool)arg1;
- (void)setCrossfadeString:(id)arg1;
- (void)setIsBootstrapCellular:(bool)arg1;
- (void)setShowsSOSWhenDisabled:(bool)arg1;
- (void)setSosAvailable:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setWifiCallingEnabled:(bool)arg1;
- (bool)showsSOSWhenDisabled;
- (bool)sosAvailable;
- (id)string;
- (long long)type;
- (bool)wifiCallingEnabled;

@end
