
@interface CRListItemOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing> {
    CRListItemMarker * _marker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } markerRange;
@property (readonly) long long markerType;
@property (readonly) Class superclass;

+ (id)listItemForParagraph:(id)arg1;
+ (id)listItemMarkerForText:(id)arg1 requiresAdjacentText:(bool)arg2;
+ (bool)textStartsWithListItem:(id)arg1;

- (void).cxx_destruct;
- (bool)canBeSucceededByListItem:(id)arg1;
- (bool)contributesToDocumentHierarchy;
- (id)layoutComponents;
- (id)listItemByAppendingParagraph:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markerRange;
- (long long)markerType;
- (id)regionsSuitableForDataDetectorOutput;
- (unsigned long long)type;

@end
