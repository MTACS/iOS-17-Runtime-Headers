
@interface RichLinkAttachmentSubstituter : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate> {
    NSMutableArray * _archivedAttachments;
    NSArray * _attachmentsForUnarchiving;
    bool  _shouldIgnoreAppStoreMetadata;
    bool  _shouldSubstituteAttachments;
}

@property (nonatomic, readonly, copy) NSMutableArray *archivedAttachments;
@property (nonatomic, copy) NSArray *attachmentsForUnarchiving;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldIgnoreAppStoreMetadata;
@property (nonatomic) bool shouldSubstituteAttachments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applyAttachmentSubstitutionForObject:(id)arg1;
- (id)archivedAttachments;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)attachmentsForUnarchiving;
- (id)init;
- (void)setAttachmentsForUnarchiving:(id)arg1;
- (void)setShouldIgnoreAppStoreMetadata:(bool)arg1;
- (void)setShouldSubstituteAttachments:(bool)arg1;
- (bool)shouldIgnoreAppStoreMetadata;
- (bool)shouldSubstituteAttachments;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;

@end
