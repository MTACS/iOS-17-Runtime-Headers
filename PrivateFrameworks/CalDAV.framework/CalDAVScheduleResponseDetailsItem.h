
@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem {
    ICSDocument * _calendarData;
    CoreDAVItemWithHrefChildItem * _recipientHREF;
    CoreDAVLeafItem * _requestStatus;
    NSString * _responseDescription;
    CoreDAVErrorItem * _topLevelErrorItem;
}

@property (nonatomic, retain) ICSDocument *calendarData;
@property (nonatomic, retain) CoreDAVItemWithHrefChildItem *recipientHREF;
@property (nonatomic, readonly) NSString *recipientString;
@property (nonatomic, retain) CoreDAVLeafItem *requestStatus;
@property (nonatomic, retain) NSString *responseDescription;
@property (nonatomic, retain) CoreDAVErrorItem *topLevelErrorItem;

- (void).cxx_destruct;
- (void)_setCalendarDataWithLeafItem:(id)arg1;
- (id)calendarData;
- (id)copyParseRules;
- (id)description;
- (id)recipientHREF;
- (id)recipientString;
- (id)requestStatus;
- (id)responseDescription;
- (void)setCalendarData:(id)arg1;
- (void)setRecipientHREF:(id)arg1;
- (void)setRequestStatus:(id)arg1;
- (void)setResponseDescription:(id)arg1;
- (void)setTopLevelErrorItem:(id)arg1;
- (id)topLevelErrorItem;

@end
