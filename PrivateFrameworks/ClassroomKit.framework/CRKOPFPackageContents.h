
@interface CRKOPFPackageContents : NSObject {
    NSString * _author;
    NSString * _bookIdentifier;
    NSString * _bookIdentifierType;
    NSString * _coverImagePath;
    NSMutableDictionary * _itemPathsByIdentifier;
    NSMutableArray * _spineItemIdentifiers;
    NSString * _tableOfContentsFilePath;
    NSString * _tableOfContentsMediaType;
    NSString * _title;
}

@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *bookIdentifier;
@property (nonatomic, copy) NSString *bookIdentifierType;
@property (nonatomic, copy) NSString *coverImagePath;
@property (nonatomic, readonly) NSMutableDictionary *itemPathsByIdentifier;
@property (nonatomic, readonly) NSMutableArray *spineItemIdentifiers;
@property (nonatomic, copy) NSString *tableOfContentsFilePath;
@property (nonatomic, copy) NSString *tableOfContentsMediaType;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)author;
- (id)bookIdentifier;
- (id)bookIdentifierType;
- (id)cfiWithItemIdentifier:(id)arg1 fragment:(id)arg2;
- (id)coverImagePath;
- (id)initWithIdentifierType:(id)arg1 identifier:(id)arg2;
- (id)itemIdentifierForHref:(id)arg1 fragment:(id*)arg2;
- (id)itemPathsByIdentifier;
- (void)setAuthor:(id)arg1;
- (void)setBookIdentifier:(id)arg1;
- (void)setBookIdentifierType:(id)arg1;
- (void)setCoverImagePath:(id)arg1;
- (void)setTableOfContentsFilePath:(id)arg1;
- (void)setTableOfContentsMediaType:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)spineItemIdentifiers;
- (id)tableOfContentsFilePath;
- (id)tableOfContentsMediaType;
- (id)title;
- (id)urlWithItemIdentifier:(id)arg1 fragment:(id)arg2;

@end
