
@interface DSConflictStrategy : NSObject {
    id /* block */  _conflictHandler;
    NSString * _localizedAlertMessageFormat;
    NSString * _localizedAlertTitle;
    NSMutableDictionary * _localizedTitlesByResolution;
    unsigned long long  _type;
}

@property (nonatomic, copy) id /* block */ conflictHandler;
@property (nonatomic, copy) NSString *localizedAlertMessageFormat;
@property (nonatomic, copy) NSString *localizedAlertTitle;
@property (nonatomic, retain) NSMutableDictionary *localizedTitlesByResolution;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id /* block */)conflictHandler;
- (id)init;
- (id)localizedAlertMessageForSourceFileURL:(id)arg1;
- (id)localizedAlertMessageFormat;
- (id)localizedAlertTitle;
- (id)localizedTitleForResolution:(unsigned long long)arg1;
- (id)localizedTitlesByResolution;
- (void)setConflictHandler:(id /* block */)arg1;
- (void)setLocalizedAlertMessageFormat:(id)arg1;
- (void)setLocalizedAlertTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1 forResolution:(unsigned long long)arg2;
- (void)setLocalizedTitlesByResolution:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)validate;

@end
