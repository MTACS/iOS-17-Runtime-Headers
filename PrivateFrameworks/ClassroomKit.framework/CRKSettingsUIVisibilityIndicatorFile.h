
@interface CRKSettingsUIVisibilityIndicatorFile : NSObject <CRKMarker> {
    <CRKMarker> * mFileMarker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fileURL;

- (void).cxx_destruct;
- (bool)createWithError:(id*)arg1;
- (bool)deleteWithError:(id*)arg1;
- (bool)exists;
- (id)init;

@end
