
@interface _ICNAAccountReportToDevice : NSObject {
    NSMutableDictionary * _countOfAccountsByType;
    NSMutableDictionary * _countOfNotesByType;
}

@property (nonatomic, retain) NSMutableDictionary *countOfAccountsByType;
@property (nonatomic, retain) NSMutableDictionary *countOfNotesByType;

- (void).cxx_destruct;
- (id)accountTypeSummary;
- (id)countOfAccountsByType;
- (id)countOfNotesByType;
- (id)init;
- (void)reportAccountType:(long long)arg1 noteCount:(unsigned long long)arg2;
- (void)setCountOfAccountsByType:(id)arg1;
- (void)setCountOfNotesByType:(id)arg1;

@end
