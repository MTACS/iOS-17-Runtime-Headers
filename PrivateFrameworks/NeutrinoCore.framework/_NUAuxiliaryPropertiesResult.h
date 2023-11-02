
@interface _NUAuxiliaryPropertiesResult : _NURenderResult <NUAuxiliaryPropertiesResult> {
    bool  _canPropagateOriginalAuxiliaryData;
    <NUImageProperties> * _properties;
}

@property bool canPropagateOriginalAuxiliaryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <NUImageProperties> *properties;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canPropagateOriginalAuxiliaryData;
- (id)properties;
- (void)setCanPropagateOriginalAuxiliaryData:(bool)arg1;
- (void)setProperties:(id)arg1;

@end
