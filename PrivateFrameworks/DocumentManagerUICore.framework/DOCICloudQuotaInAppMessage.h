
@interface DOCICloudQuotaInAppMessage : NSObject {
    NSArray * _actions;
    unsigned long long  _contentType;
    UIImage * _icon;
    NSString * _subTitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) UIImage *icon;
@property (nonatomic, readonly, copy) NSString *subTitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)actions;
- (unsigned long long)contentType;
- (id)contentTypeDescription;
- (unsigned long long)contentTypeWithMessage:(id)arg1;
- (id)icon;
- (id)initWithContentType:(unsigned long long)arg1 title:(id)arg2 subTitle:(id)arg3 icon:(id)arg4 actions:(id)arg5;
- (id)initWithICQInAppMessage:(id)arg1;
- (id)subTitle;
- (id)title;

@end
