
@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _backgroundTaskRecordsByRecordName;
    NSMutableDictionary * _backgroundTaskRecordsByTaskIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (retain) NSMutableDictionary *backgroundTaskRecordsByRecordName;
@property (retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier;

+ (id)contextWithArchive:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addBackgroundDownloadRecord:(id)arg1 forRecordName:(id)arg2;
- (void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned long long)arg2;
- (void)archiveAtPath:(id)arg1;
- (id)backgroundDownloadRecordForRecordName:(id)arg1;
- (id)backgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (id)backgroundTaskRecordsByRecordName;
- (id)backgroundTaskRecordsByTaskIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)remainingTasks;
- (void)removeBackgroundDownloadRecordForRecordName:(id)arg1;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (void)setBackgroundTaskRecordsByRecordName:(id)arg1;
- (void)setBackgroundTaskRecordsByTaskIdentifier:(id)arg1;

@end
