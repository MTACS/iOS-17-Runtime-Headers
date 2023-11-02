
@interface MSReadLaterTriageAction : MSTriageAction {
    NSDate * _readLaterDate;
}

@property (nonatomic, retain) NSDate *readLaterDate;

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4 readLaterDate:(id)arg5;
- (id)readLaterDate;
- (void)setReadLaterDate:(id)arg1;

@end
