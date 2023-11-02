
@interface ICNoteBaseActivityItemSource : NSObject <UIActivityItemSourceAttachment> {
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
