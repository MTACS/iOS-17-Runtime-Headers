
@interface MPStoreItemLibraryImport : NSObject {
    bool  _addToCloudLibrary;
    bool  _addToDeviceLibraryOnly;
    NSArray * _importElements;
    MPModelObject * _referralObject;
}

@property (nonatomic, readonly) bool addToCloudLibrary;
@property (nonatomic, readonly) bool addToDeviceLibraryOnly;
@property (nonatomic, readonly) NSArray *importElements;
@property (nonatomic, readonly) MPModelObject *referralObject;

- (void).cxx_destruct;
- (id)_initWithImportElements:(id)arg1 referralObject:(id)arg2 usingCloudLibraryDestination:(bool)arg3 localLibraryDestination:(bool)arg4;
- (bool)addToCloudLibrary;
- (bool)addToDeviceLibraryOnly;
- (id)importElements;
- (id)initUsingLocalDeviceLibraryDestinationWithImportElements:(id)arg1 referralObject:(id)arg2 usingLocalLibraryDestination:(bool)arg3 usingCloudLibraryDestination:(bool)arg4;
- (id)initUsingLocalDeviceLibraryDestinationWithImportElements:(id)arg1 usingLocalLibraryDestination:(bool)arg2 usingCloudLibraryDestination:(bool)arg3;
- (id)initWithImportElements:(id)arg1 referralObject:(id)arg2 usingCloudLibraryDestination:(bool)arg3;
- (id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(bool)arg2;
- (id)referralObject;

@end
