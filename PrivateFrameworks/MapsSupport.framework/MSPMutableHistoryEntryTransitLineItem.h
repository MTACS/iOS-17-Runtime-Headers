
@interface MSPMutableHistoryEntryTransitLineItem : MSPMutableHistoryEntry <MSPHistoryEntryTransitLineItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <GEOTransitLineItem> *lineItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tracksRAPReportingOnly;
@property (nonatomic, readonly, copy) NSDate *usageDate;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)lineItem;
- (void)setLineItem:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

@end
