
@interface ICChangeDatesActivity : UIActivity {
    id  _representedObject;
    unsigned char  _type;
}

@property (nonatomic, retain) id representedObject;
@property (nonatomic) unsigned char type;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithObject:(id)arg1 activityType:(unsigned char)arg2;
- (id)representedObject;
- (void)setCreationDateForAttachmentObject:(id)arg1;
- (void)setCreationDateForNoteObject:(id)arg1;
- (void)setModificationDateForAttachmentObject:(id)arg1;
- (void)setModificationDateForNoteObject:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setType:(unsigned char)arg1;
- (unsigned char)type;

@end
