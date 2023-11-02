
@interface PKDashboardMessageSectionController : PKDynamicListSectionController <PKDashboardMessagesViewDelegate> {
    <PKDashboardMessageSectionControllerDelegate> * _delegate;
    PKDashboardMessageRowItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PKDashboardMessageSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_decorateCell:(id)arg1 forItem:(id)arg2;
- (id)cellRegistrationForItem:(id)arg1;
- (id)delegate;
- (id)identifiers;
- (id)initWithMessages:(id)arg1 delegate:(id)arg2;
- (void)messagesView:(id)arg1 scrolledToMessageWithIdentifier:(id)arg2;
- (bool)messagesView:(id)arg1 shouldEnqueueEventForView:(id)arg2;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)updateWithMessages:(id)arg1 currentMessageIndex:(unsigned long long)arg2;

@end
