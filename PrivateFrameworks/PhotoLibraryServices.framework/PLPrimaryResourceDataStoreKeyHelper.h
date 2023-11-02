
@interface PLPrimaryResourceDataStoreKeyHelper : NSObject {
    char * bundleBaseData;
    char * computeBaseData;
    char * derivativesBaseData;
    char * masterThumbFilenameData;
    char * masterThumbsBaseData;
    char * originalsBaseData;
    char * rendersBaseData;
}

- (void)dealloc;
- (id)initWithPathManager:(id)arg1;

@end
