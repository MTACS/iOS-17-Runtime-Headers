
@interface NoteBodyObject : NSManagedObject <ICSearchIndexableTarget>

@property (nonatomic, retain) NSString *content;
@property (nonatomic, readonly) NSString *contentAsPlainText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *externalContentRef;
@property (nonatomic, retain) NSData *externalRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NoteObject *owner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ICSearchIndexable> *targetSearchIndexable;

- (id)contentAsPlainText;
- (id)contentAsPlainTextPreservingNewlines;
- (id)targetSearchIndexable;

@end
