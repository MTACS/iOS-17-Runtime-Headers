
@interface SFUITTRReport : NSObject {
    SFUITTRReportComponent * _component;
    NSString * _desc;
    NSString * _title;
}

@property (nonatomic, retain) SFUITTRReportComponent *component;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *title;

+ (id)peopleSuggestionReport;

- (void).cxx_destruct;
- (id)component;
- (id)desc;
- (id)initWithTitle:(id)arg1 desc:(id)arg2 component:(id)arg3;
- (void)setComponent:(id)arg1;
- (void)setDesc:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
