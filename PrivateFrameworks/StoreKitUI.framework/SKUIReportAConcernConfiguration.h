
@interface SKUIReportAConcernConfiguration : NSObject <NSCopying> {
    long long  _itemIdentifier;
    NSString * _privacyNote;
    NSArray * _reasons;
    NSString * _reportConcernExplanation;
    NSURL * _reportConcernURL;
    NSString * _selectReasonSubtitle;
    NSString * _selectReasonTitle;
}

@property (nonatomic) long long itemIdentifier;
@property (nonatomic, copy) NSString *privacyNote;
@property (nonatomic, copy) NSArray *reasons;
@property (nonatomic, copy) NSString *reportConcernExplanation;
@property (nonatomic, copy) NSURL *reportConcernURL;
@property (nonatomic, copy) NSString *selectReasonSubtitle;
@property (nonatomic, copy) NSString *selectReasonTitle;

+ (id)configurationWithTemplateElement:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)itemIdentifier;
- (id)privacyNote;
- (id)reasons;
- (id)reportConcernExplanation;
- (id)reportConcernURL;
- (id)selectReasonSubtitle;
- (id)selectReasonTitle;
- (void)setItemIdentifier:(long long)arg1;
- (void)setPrivacyNote:(id)arg1;
- (void)setReasons:(id)arg1;
- (void)setReportConcernExplanation:(id)arg1;
- (void)setReportConcernURL:(id)arg1;
- (void)setSelectReasonSubtitle:(id)arg1;
- (void)setSelectReasonTitle:(id)arg1;

@end
