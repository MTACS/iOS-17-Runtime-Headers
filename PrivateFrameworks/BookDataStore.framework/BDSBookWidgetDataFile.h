
@interface BDSBookWidgetDataFile : NSObject {
    BDSSharedDataFile * _dataFile;
}

@property (nonatomic, readonly) BDSSharedDataFile *dataFile;

+ (id)defaultDataURL;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dataFile;
- (id)init;
- (id)load;
- (void)save:(id)arg1;

@end
