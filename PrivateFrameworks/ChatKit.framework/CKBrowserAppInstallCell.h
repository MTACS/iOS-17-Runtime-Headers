
@interface CKBrowserAppInstallCell : CKBrowserCell {
    CKBrowserIconView * _browserIconView;
    CKAppInstallation * _installation;
}

@property (nonatomic, retain) CKBrowserIconView *browserIconView;
@property (nonatomic, retain) CKAppInstallation *installation;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)browserIconView;
- (id)iconView;
- (id)installation;
- (void)layoutSubviews;
- (void)setBrowserIconView:(id)arg1;
- (void)setInstallation:(id)arg1;

@end
