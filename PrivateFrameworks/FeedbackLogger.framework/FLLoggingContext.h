
@interface FLLoggingContext : NSObject <FLLoggingContext> {
    NSFileManager * _fileManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _timestampReferenceIdentifier;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long now;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timestampReferenceIdentifier;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)fileManager;
- (id)init;
- (id)initWithFileManager:(id)arg1;
- (unsigned long long)now;
- (id)queue;
- (void)reportTelemetry:(id)arg1 payload:(id)arg2;
- (void)setFileManager:(id)arg1;
- (void)setTimestampReferenceIdentifier:(id)arg1;
- (id)timestampReferenceIdentifier;
- (id)userDefaults;

@end
