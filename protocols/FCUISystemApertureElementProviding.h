
@protocol FCUISystemApertureElementProviding <NSObject>

@optional

- (FCUIFocusEnablementIndicatorSystemApertureElement *)createFocusElementForActivityDescription:(id <FCActivityDescribing>)arg1 enabled:(bool)arg2;
- (FCUIFocusEnablementIndicatorSystemApertureActivityElement *)createPersistentFocusElementForActivityDescription:(id <FCActivityDescribing>)arg1 enabled:(bool)arg2;

@end
