
@interface TCMessageException : NSException {
    TCMessageEntry * m_entry;
}

+ (id)exceptionWithMessage:(id)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (void)initialize;
+ (id)nsError:(id)arg1 domain:(id)arg2;
+ (void)raise:(id)arg1;
+ (void)raiseUntaggedMessage:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)getEntry;
- (id)initWithMessage:(id)arg1;
- (id)initWithUntaggedMessage:(id)arg1;

@end
