
@interface REMSmartListCustomContext : NSObject {
    REMAccount * _account;
    REMList * _parentList;
    REMSmartList * _smartlist;
}

@property (nonatomic, readonly) REMAccount *account;
@property (nonatomic, readonly) REMListBadge *badge;
@property (nonatomic, readonly) REMColor *color;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) REMList *parentList;
@property (nonatomic, retain) REMSmartList *smartlist;

- (void).cxx_destruct;
- (id)account;
- (id)badge;
- (id)color;
- (id)initWithSmartList:(id)arg1 account:(id)arg2 parentList:(id)arg3;
- (id)name;
- (id)parentList;
- (void)setSmartlist:(id)arg1;
- (id)smartlist;

@end
