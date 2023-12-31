
@interface TSKAnnotationAuthorStorage : TSPObject {
    NSMutableSet * mAuthors;
}

@property (nonatomic, readonly) NSSet *authors;

- (void)addAuthor:(id)arg1;
- (id)authorWithName:(id)arg1;
- (id)authors;
- (void)dealloc;
- (unsigned int)delayedArchivingPriority;
- (id)description;
- (void)didAddAuthorRelationshipToDocument;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (void)didRemoveAuthorRelationshipFromDocument;
- (id)nextAuthorColor;
- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(bool)arg2;
- (id)packageLocator;
- (void)removeAuthor:(id)arg1;
- (bool)shouldDelayArchiving;

@end
