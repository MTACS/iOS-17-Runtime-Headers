
@interface WFCalendarEventContentItem : WFGenericFileContentItem {
    EKEventStore * _eventStore;
}

@property (nonatomic, readonly) EKEvent *event;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic, readonly) NSString *location;

+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)dateByApplyingComponents:(id)arg1 toDateComponents:(id)arg2;
+ (id)filterDescription;
+ (bool)hasLibrary;
+ (id)icsCoercionHandler;
+ (id)itemWithEKEvent:(id)arg1 fromEventStore:(id)arg2;
+ (id)mapItemCoercionHandler;
+ (id)mapsLinkCoercionHandler;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)participantsCoercionHandler;
+ (id)placemarkCoercionHandler;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)streetAddressCoercionHandler;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (void).cxx_destruct;
- (id)attachments;
- (id)changeTransaction;
- (id)color;
- (void)copyStateToItem:(id)arg1;
- (id)defaultSourceForRepresentation:(id)arg1;
- (id)event;
- (id)eventStore;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (void)getMapItemRepresentationIfPresent:(id /* block */)arg1;
- (id)isCanceled;
- (id)location;
- (id)myStatus;
- (void)setEventStore:(id)arg1;
- (id)structuredLocation;

@end
