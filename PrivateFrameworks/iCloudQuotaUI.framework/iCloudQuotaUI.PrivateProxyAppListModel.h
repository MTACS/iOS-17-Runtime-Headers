
@interface iCloudQuotaUI.PrivateProxyAppListModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activeDate;
    void appIcon;
    void appStatus;
    void bundleId;
}

@property (nonatomic, retain) UIImage *appIcon;

- (void).cxx_destruct;
- (id)appIcon;
- (id)init;
- (id)initWithProxyAppStatus:(id)arg1;
- (void)setAppIcon:(id)arg1;

@end
