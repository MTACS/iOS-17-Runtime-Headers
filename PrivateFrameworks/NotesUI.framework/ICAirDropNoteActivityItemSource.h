
@interface ICAirDropNoteActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource> {
    id  _airDropActivityItem;
    id /* block */  _airDropDocumentCreator;
}

@property (nonatomic, retain) id airDropActivityItem;
@property (nonatomic, copy) id /* block */ airDropDocumentCreator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)airDropActivityItem;
- (id /* block */)airDropDocumentCreator;
- (id)initWithTitle:(id)arg1 airDropDocumentCreator:(id /* block */)arg2;
- (void)setAirDropActivityItem:(id)arg1;
- (void)setAirDropDocumentCreator:(id /* block */)arg1;

@end
