
@protocol NUDocumentSectionBlueprintProvider <NSObject>

@required

- (FCObservable *)observableContentOverlayBlueprintData;
- (FCObservable *)observableFooterBlueprint;
- (FCObservable *)observableHeaderBlueprint;

@end
