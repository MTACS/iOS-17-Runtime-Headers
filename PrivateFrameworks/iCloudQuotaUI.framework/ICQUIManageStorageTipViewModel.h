
@interface ICQUIManageStorageTipViewModel : ICQUIInlineTipViewModel {
    NSArray * _actions;
    ICQImageURL * _iconURL;
    NSString * _sectionID;
    NSString * _subTitle;
    NSString * _systemColor;
    NSString * _systemIconName;
    NSString * _title;
}

@property (nonatomic, readonly, copy) AMSUIMessageRequest *request;

- (void).cxx_destruct;
- (id)initWithSectionAttributes:(id)arg1 rows:(id)arg2;
- (id)initWithTipInfo:(id)arg1;
- (id)request;

@end
