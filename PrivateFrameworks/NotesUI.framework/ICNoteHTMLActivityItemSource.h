
@interface ICNoteHTMLActivityItemSource : NSObject <UIActivityItemSource> {
    ICNote * _note;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICNote *note;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;
- (id)initWithNote:(id)arg1;
- (id)note;
- (void)setNote:(id)arg1;

@end
