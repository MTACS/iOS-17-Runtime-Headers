
@interface NUDocumentSectionBlueprintProvider : NSObject <NUDocumentSectionBlueprintProvider> {
    FCObservable * _tempObservableContentOverlayBlueprintData;
    FCObservable * _tempObservableFooterBlueprint;
    FCObservable * _tempObservableHeaderBlueprint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCObservable *tempObservableContentOverlayBlueprintData;
@property (nonatomic, readonly) FCObservable *tempObservableFooterBlueprint;
@property (nonatomic, readonly) FCObservable *tempObservableHeaderBlueprint;

- (void).cxx_destruct;
- (id)init;
- (id)observableContentOverlayBlueprintData;
- (id)observableFooterBlueprint;
- (id)observableHeaderBlueprint;
- (id)tempObservableContentOverlayBlueprintData;
- (id)tempObservableFooterBlueprint;
- (id)tempObservableHeaderBlueprint;

@end
