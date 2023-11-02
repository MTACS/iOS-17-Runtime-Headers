
@interface TabDocumentActivityItemProvider : _SFActivityItemProvider {
    TabDocument * _tabDocument;
}

@property (nonatomic, readonly) TabDocument *tabDocument;

- (void).cxx_destruct;
- (id)initWithTabDocument:(id)arg1;
- (id)item;
- (id)tabDocument;

@end
