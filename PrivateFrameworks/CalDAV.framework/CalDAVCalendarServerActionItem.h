
@interface CalDAVCalendarServerActionItem : CoreDAVItem {
    CalDAVCalendarServerCancelItem * _cancel;
    CoreDAVItemWithNoChildren * _create;
    CalDAVCalendarServerReplyItem * _reply;
    CalDAVCalendarServerUpdateItem * _update;
}

@property (nonatomic, retain) CalDAVCalendarServerCancelItem *cancel;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *create;
@property (nonatomic, retain) CalDAVCalendarServerReplyItem *reply;
@property (nonatomic, retain) CalDAVCalendarServerUpdateItem *update;

- (void).cxx_destruct;
- (id)cancel;
- (id)copyParseRules;
- (id)create;
- (id)init;
- (id)reply;
- (void)setCancel:(id)arg1;
- (void)setCreate:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setUpdate:(id)arg1;
- (id)update;

@end
