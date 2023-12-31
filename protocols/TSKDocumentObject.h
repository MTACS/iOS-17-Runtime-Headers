
@protocol TSKDocumentObject

@required

- (void)wasAddedToDocumentRoot:(TSKDocumentRoot *)arg1 context:(TSKAddedToDocumentContext *)arg2;
- (void)wasRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;
- (void)willBeAddedToDocumentRoot:(TSKDocumentRoot *)arg1 context:(TSKAddedToDocumentContext *)arg2;
- (void)willBeRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;

@end
