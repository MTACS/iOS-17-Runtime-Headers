
@interface WDCitationTable : NSObject {
    NSMutableDictionary * mCitations;
    WDDocument * mDocument;
}

@property (readonly) WDDocument *document;

- (void).cxx_destruct;
- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)citationFor:(id)arg1;
- (id)citationIDs;
- (unsigned long long)count;
- (id)description;
- (id)document;
- (id)initWithDocument:(id)arg1;

@end
