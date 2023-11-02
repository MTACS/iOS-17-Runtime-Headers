
@interface ICNoteFolderSectionIdentifier : ICNoteSectionIdentifier {
    NSManagedObjectID * _noteContainerObjectID;
}

@property (nonatomic, readonly) NSManagedObjectID *noteContainerObjectID;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNoteContainerObjectID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)noteContainerObjectID;

@end
