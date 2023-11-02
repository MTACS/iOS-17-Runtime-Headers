
@interface _GCDevicePhysicalInputBase : NSObject <_GCDevicePhysicalInputViewDataSource> {
    struct __CFArray { } * _additionalViews;
    NSSet * _attributes;
    <_GCDevicePhysicalInputDataSource> * _dataSource;
    <GCDevice> * _device;
    _GCDevicePhysicalInputElementsCollection * _elementCollection;
    unsigned long long  _elementCount;
    NSDictionary * _elementIndexByAlias;
    _GCDevicePhysicalInputFacade * _facade;
    _GCDevicePhysicalInputElementsArray * _indexedElementViews;
    id * _indexedElements;
    _GCDevicePhysicalInputStateTable * _viewConfiguration;
    _GCDevicePhysicalInputStateTable * _viewProperties;
    _GCDevicePhysicalInputStateTable * _viewState;
}

@property <_GCDevicePhysicalInputDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <GCDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) double lastEventLatency;
@property (readonly) double lastEventTimestamp;
@property (readonly) _GCDevicePhysicalInput *physicalInput;
@property (getter=isSnapshot, readonly) bool snapshot;
@property (readonly) Class superclass;

+ (id)debugDescription;
+ (id)description;

- (id)_initWithFacadeTemplate:(id)arg1 elementsTemplates:(id)arg2 attributes:(id)arg3 context:(id)arg4;
- (id)_stateTableForSlot:(union SlotID { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2 : 8; unsigned int x_2_1_3 : 8; unsigned short x_2_1_4; } x2; })arg1;
- (id)dataSource;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)device;
- (id)init;
- (bool)isSnapshot;
- (double)lastEventLatency;
- (double)lastEventTimestamp;
- (id)physicalInput;
- (id)redactedDescription;
- (void)setDataSource:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)updateViewStateIfNeeded;
- (id)view:(id)arg1 objectValueForSlot:(unsigned long long*)arg2;
- (unsigned long long)view:(id)arg1 primitiveValueForSlot:(unsigned long long*)arg2;
- (void)view:(id)arg1 setObjectValue:(id)arg2 forSlot:(unsigned long long*)arg3 policy:(unsigned long long)arg4;
- (void)view:(id)arg1 setPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long*)arg3;
- (bool)view:(id)arg1 testAndSetObjectValue:(id)arg2 forSlot:(unsigned long long*)arg3 policy:(unsigned long long)arg4;
- (bool)view:(id)arg1 testAndSetPrimitiveValue:(unsigned long long)arg2 forSlot:(unsigned long long*)arg3;
- (id)view:(id)arg1 viewForSlot:(unsigned long long*)arg2;

@end
