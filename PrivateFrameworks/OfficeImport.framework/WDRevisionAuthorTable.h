
@interface WDRevisionAuthorTable : NSObject {
    NSMutableArray * mAuthors;
    WDDocument * mDocument;
}

- (void).cxx_destruct;
- (void)addAuthor:(id)arg1;
- (unsigned long long)authorAddLookup:(id)arg1;
- (id)authorAt:(unsigned long long)arg1;
- (unsigned long long)authorCount;
- (id)authors;
- (id)description;
- (id)initWithDocument:(id)arg1;

@end
