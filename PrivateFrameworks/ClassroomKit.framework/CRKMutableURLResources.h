
@interface CRKMutableURLResources : CRKURLResources

@property (getter=isDirectory, nonatomic, retain) NSNumber *directory;
@property (nonatomic, copy) NSNumber *documentIdentifier;
@property (nonatomic, retain) NSDate *lastModificationDate;
@property (nonatomic) unsigned long long size;

- (void)setDirectory:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1;
- (void)setLastModificationDate:(id)arg1;
- (void)setSize:(unsigned long long)arg1;

@end
