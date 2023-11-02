
@interface FPDocumentAlternateContents : NSObject {
    NSMutableDictionary * _alternateContentsURLDictionary;
}

- (void).cxx_destruct;
- (void)dumpToDumper:(id)arg1;
- (id)getAlternateContentsURLWrapperForItemID:(id)arg1;
- (id)initWithAlternateContentsDictionary:(id)arg1;
- (void)removeAlternateContentsURLForDocumentWithItemID:(id)arg1;
- (void)setAlternateContentsURLWrapper:(id)arg1 forDocumentWithItemID:(id)arg2;
- (void)updateWithManagerAlternateContentsDictionary:(id)arg1;

@end
