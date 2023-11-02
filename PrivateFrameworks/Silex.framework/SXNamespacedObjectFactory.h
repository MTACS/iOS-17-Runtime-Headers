
@interface SXNamespacedObjectFactory : NSObject <SXNamespacedObjectFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)createNamespacedComponentStylesReferencesForComponent:(id)arg1 DOM:(id)arg2;
- (void)createNamespacedComponentTextStylesReferencesForComponent:(id)arg1 DOM:(id)arg2;
- (id)createNamespacedReferenceForComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
- (id)createNamespacedReferenceForComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
- (id)createNamespacedReferenceForTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;
- (void)createNamespacedTextStylesReferencesForComponent:(id)arg1 DOM:(id)arg2;

@end
