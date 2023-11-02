
@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {
    NSString * _syncToken;
}

@property (nonatomic, readonly) NSString *syncToken;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)_setSyncTokenItem:(id)arg1;
- (id)description;
- (id)syncToken;

@end
