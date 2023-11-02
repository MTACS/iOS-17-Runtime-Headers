
@interface ENPlainNoteContent : ENNoteContent {
    NSArray * _contents;
}

@property (nonatomic, copy) NSArray *contents;

- (void).cxx_destruct;
- (id)contents;
- (id)enmlWithNote:(id)arg1;
- (id)initWithContents:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)setContents:(id)arg1;

@end
