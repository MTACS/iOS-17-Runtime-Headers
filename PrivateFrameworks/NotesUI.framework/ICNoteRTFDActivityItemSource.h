
@interface ICNoteRTFDActivityItemSource : NSObject <UIActivityItemSource> {
    ICNote * _note;
    ICShareNoteExporter * _noteExporter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, retain) ICShareNoteExporter *noteExporter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;
- (id)initWithNote:(id)arg1 noteExporter:(id)arg2;
- (id)note;
- (id)noteExporter;
- (void)setNote:(id)arg1;
- (void)setNoteExporter:(id)arg1;

@end
