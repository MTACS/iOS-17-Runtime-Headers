
@interface CDPUICustodianAskHelpViewModel : NSObject <NSCopying> {
    CDPRemoteValidationEscapeOffer * _dontAskForHelpOption;
    NSString * _footer;
    CDPEscapeOption * _getHelpNowOption;
    NSString * _iconName;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) CDPRemoteValidationEscapeOffer *dontAskForHelpOption;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic, retain) CDPEscapeOption *getHelpNowOption;
@property (nonatomic, copy) NSString *iconName;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dontAskForHelpOption;
- (id)footer;
- (id)getHelpNowOption;
- (id)iconName;
- (id)message;
- (void)setDontAskForHelpOption:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setGetHelpNowOption:(id)arg1;
- (void)setIconName:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
