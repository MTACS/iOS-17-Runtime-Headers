
@interface _NUImagePropertiesResult : _NURenderResult <NUImagePropertiesResult> {
    <NUImageProperties> * _properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <NUImageProperties> *properties;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
