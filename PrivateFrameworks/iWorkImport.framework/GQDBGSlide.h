
@interface GQDBGSlide : GQDBGAbstractSlide {
    GQDWPLayoutFrame * mNoteFrame;
    GQDBGTemplateSlide * mTemplate;
}

- (void)dealloc;
- (id)init;
- (id)noteFrame;
- (id)templateSlide;

@end
