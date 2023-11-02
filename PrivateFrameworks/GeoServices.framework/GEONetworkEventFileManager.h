
@interface GEONetworkEventFileManager : NSObject {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSDateFormatter * _dateFormatter;
    NSString * _fileDirectory;
    bool  _needDir;
    NSMutableDictionary * _netEventFiles;
    NSObject<OS_dispatch_queue> * _syncQ;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_closeFiles;
- (bool)_createIfNeededNetworkEventDataDirectory:(id)arg1;
- (id)_filepathFromDate:(id)arg1;
- (void)_startTimer;
- (void)commoninit;
- (int)fileDescriptorOfNetworkEventDataFileForRepresentativeDate:(id)arg1;
- (id)init;
- (id)initWithDirectory:(id)arg1;
- (void)saveNetworkEventData:(id)arg1 atTime:(id)arg2;

@end
