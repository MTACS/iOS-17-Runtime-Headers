
@protocol SXNamespacedObjectFactory <NSObject>

@required

- (void)createNamespacedComponentStylesReferencesForComponent:(NSString *)arg1 DOM:(SXMutableDOM *)arg2;
- (void)createNamespacedComponentTextStylesReferencesForComponent:(NSString *)arg1 DOM:(SXMutableDOM *)arg2;
- (NSString *)createNamespacedReferenceForComponentStyle:(NSString *)arg1 component:(NSString *)arg2 DOM:(SXMutableDOM *)arg3;
- (NSString *)createNamespacedReferenceForComponentTextStyle:(NSString *)arg1 component:(NSString *)arg2 DOM:(SXMutableDOM *)arg3;
- (NSString *)createNamespacedReferenceForTextStyle:(NSString *)arg1 component:(NSString *)arg2 DOM:(SXMutableDOM *)arg3;
- (void)createNamespacedTextStylesReferencesForComponent:(NSString *)arg1 DOM:(SXMutableDOM *)arg2;

@end
