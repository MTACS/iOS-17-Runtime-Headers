
@protocol CNChangeHistoryEventVisitorPrivate <CNChangeHistoryEventVisitor>

@required

- (void)visitDifferentMeCardEvent:(CNChangeHistoryDifferentMeCardEvent *)arg1;
- (void)visitLinkContactsEvent:(CNChangeHistoryLinkContactsEvent *)arg1;
- (void)visitPreferredContactForImageEvent:(CNChangeHistoryPreferredContactForImageEvent *)arg1;
- (void)visitPreferredContactForNameEvent:(CNChangeHistoryPreferredContactForNameEvent *)arg1;
- (void)visitUnlinkContactEvent:(CNChangeHistoryUnlinkContactEvent *)arg1;

@end
