
@interface ICCopyModernNotesToLegacyAccountOperation : NSOperation {
    <ICLegacyFolder> * _destinationFolder;
    id /* block */  _didCopyBlock;
    <ICLegacyContext> * _legacyContext;
    NSArray * _sourceNotes;
}

@property (nonatomic, retain) <ICLegacyFolder> *destinationFolder;
@property (nonatomic, copy) id /* block */ didCopyBlock;
@property (nonatomic, retain) <ICLegacyContext> *legacyContext;
@property (nonatomic, copy) NSArray *sourceNotes;

- (void).cxx_destruct;
- (id)copyNote:(id)arg1 toFolder:(id)arg2;
- (id)dataForAttachment:(id)arg1 outFilename:(id*)arg2 outMimeType:(id*)arg3;
- (id)destinationFolder;
- (id /* block */)didCopyBlock;
- (id)ensureLegacyFolderIsValid:(id)arg1;
- (id)htmlAttributesForAttachment:(id)arg1 legacyContentID:(id)arg2 tagName:(id*)arg3;
- (id)init;
- (id)initWithNotes:(id)arg1 toFolder:(id)arg2 legacyContext:(id)arg3 didCopyBlock:(id /* block */)arg4;
- (id)legacyContext;
- (void)main;
- (void)setDestinationFolder:(id)arg1;
- (void)setDidCopyBlock:(id /* block */)arg1;
- (void)setLegacyContext:(id)arg1;
- (void)setSourceNotes:(id)arg1;
- (id)sourceNotes;

@end
