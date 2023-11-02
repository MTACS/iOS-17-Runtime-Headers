
@interface CNPRUISIncomingCallSnapshotDefinition : NSObject {
    PRUISIncomingCallSnapshotDefinition * _wrappedDefinition;
}

@property (nonatomic, readonly) PRUISIncomingCallSnapshotDefinition *wrappedDefinition;

+ (id)compositeSnapshotDefinitionWithContext:(id)arg1 attachmentIdentifiers:(id)arg2;
+ (id)contentsAndObscurableContentSnapshotDefinitionWithContext:(id)arg1 attachmentIdentifiers:(id)arg2;
+ (id)contentsAndOverlayContentSnapshotDefinitionWithContext:(id)arg1 attachmentIdentifiers:(id)arg2;
+ (id)contentsOnlySnapshotDefinitionWithContext:(id)arg1 attachmentIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (id)initWithWrappedDefinition:(id)arg1;
- (id)levelSets;
- (id)wrappedDefinition;

@end
