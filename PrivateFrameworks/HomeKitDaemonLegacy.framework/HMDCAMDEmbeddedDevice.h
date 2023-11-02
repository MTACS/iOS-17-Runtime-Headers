
@interface HMDCAMDEmbeddedDevice : NSObject <HMDCAMCommunicationProtocols> {
    NSMutableDictionary * _classInstances;
    bool  _filterNSDataLogging;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool filterNSDataLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)filterNSDataLogging;
- (id)init;
- (id)instanceOfClass:(Class)arg1 forShortName:(id)arg2;
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id*)arg4;
- (void)setFilterNSDataLogging:(bool)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
