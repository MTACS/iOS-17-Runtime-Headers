
@interface QuickLook.QLTextDocument : UIDocument {
    void content;
}

@property (nonatomic, readonly) NSAttributedString *attributedTextContent;
@property (nonatomic, readonly) bool hasRichContent;
@property (nonatomic, readonly) NSString *textContent;

- (void).cxx_destruct;
- (id)attributedTextContent;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (bool)hasRichContent;
- (id)initWithFileURL:(id)arg1;
- (bool)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)saveWithTextContent:(id)arg1;
- (id)textContent;

@end
