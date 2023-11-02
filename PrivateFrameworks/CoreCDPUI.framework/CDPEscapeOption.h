
@interface CDPEscapeOption : NSObject {
    id /* block */  _canShowEscapeOption;
    id /* block */  _escapeAction;
    NSString * _progressLabel;
    NSString * _progressTitle;
    unsigned long long  _style;
    NSString * _title;
    NSString * _titleLocalizationKey;
    NSString * _titleTelemetryKey;
}

@property (nonatomic, copy) id /* block */ canShowEscapeOption;
@property (nonatomic, copy) id /* block */ escapeAction;
@property (nonatomic, copy) NSString *progressLabel;
@property (nonatomic, copy) NSString *progressTitle;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocalizationKey;
@property (nonatomic, copy) NSString *titleTelemetryKey;

+ (id)cancelOption;
+ (id)okOption;

- (void).cxx_destruct;
- (id /* block */)canShowEscapeOption;
- (id /* block */)escapeAction;
- (id)progressLabel;
- (id)progressTitle;
- (void)setCanShowEscapeOption:(id /* block */)arg1;
- (void)setEscapeAction:(id /* block */)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setProgressTitle:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocalizationKey:(id)arg1;
- (void)setTitleTelemetryKey:(id)arg1;
- (unsigned long long)style;
- (id)title;
- (id)titleLocalizationKey;
- (id)titleTelemetryKey;

@end
