
@interface AXSBImageExplorerData : NSObject <NSSecureCoding> {
    NSString * _axLabel;
    NSArray * _customContent;
    NSString * _hostAppBundleID;
    NSString * _hostAppName;
}

@property (nonatomic, retain) NSString *axLabel;
@property (nonatomic, retain) NSArray *customContent;
@property (nonatomic, retain) NSString *hostAppBundleID;
@property (nonatomic, retain) NSString *hostAppName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)axLabel;
- (id)customContent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hostAppBundleID;
- (id)hostAppName;
- (id)initWithCoder:(id)arg1;
- (void)setAxLabel:(id)arg1;
- (void)setCustomContent:(id)arg1;
- (void)setHostAppBundleID:(id)arg1;
- (void)setHostAppName:(id)arg1;

@end
