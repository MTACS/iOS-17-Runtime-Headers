
@protocol OKWidgetMapViewProxyExports <JSExport>

@required

- (void)selectAnnotationWithIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (void)zoomToAnnotationsWithIdentifiers:(NSArray *)arg1 animated:(bool)arg2;

@optional

- (void)selectAnnotationWithIdentifier:(NSString *)arg1 animated:(bool)arg2 __JS_EXPORT_AS__selectAnnotation:(id)arg3;
- (void)zoomToAnnotationsWithIdentifiers:(NSArray *)arg1 animated:(bool)arg2 __JS_EXPORT_AS__zoomToAnnotations:(id)arg3;

@end
