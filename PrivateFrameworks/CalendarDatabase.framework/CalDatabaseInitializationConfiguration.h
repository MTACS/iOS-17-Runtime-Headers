
@interface CalDatabaseInitializationConfiguration : NSObject {
    <CalCalendarDataContainerProvider> * _dataContainerProvider;
    NSURL * _directoryURL;
    int  _options;
    CDBPreferences * _preferences;
}

@property (nonatomic, retain) <CalCalendarDataContainerProvider> *dataContainerProvider;
@property (nonatomic, retain) NSURL *directoryURL;
@property (nonatomic) int options;
@property (nonatomic, retain) CDBPreferences *preferences;

- (void).cxx_destruct;
- (id)dataContainerProvider;
- (id)description;
- (id)directoryURL;
- (id)initWithDirectoryURL:(id)arg1;
- (int)options;
- (id)preferences;
- (id)redactedDescription;
- (void)setDataContainerProvider:(id)arg1;
- (void)setDirectoryURL:(id)arg1;
- (void)setOptions:(int)arg1;
- (void)setPreferences:(id)arg1;

@end
