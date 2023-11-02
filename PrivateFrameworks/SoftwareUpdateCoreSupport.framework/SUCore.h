
@interface SUCore : NSObject {
    NSString * _baseDomain;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSObject<OS_dispatch_queue> * _delegateCallbackQueue;
    NSString * _filesystemBaseDir;
    NSObject<OS_dispatch_queue> * _waitedOperationQueue;
}

@property (nonatomic, retain) NSString *baseDomain;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic, retain) NSString *filesystemBaseDir;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *waitedOperationQueue;

+ (bool)arrayIsEqual:(id)arg1 to:(id)arg2;
+ (id)beginTransactionWithName:(id)arg1;
+ (bool)dataIsEqual:(id)arg1 to:(id)arg2;
+ (bool)dateIsEqual:(id)arg1 to:(id)arg2;
+ (bool)dictionaryIsEqual:(id)arg1 to:(id)arg2;
+ (void)endTransaction:(id)arg1 withName:(id)arg2;
+ (bool)errorIsEqual:(id)arg1 to:(id)arg2;
+ (id)errorNameForCode:(long long)arg1;
+ (id)getFileMetadata:(const char *)arg1 forKey:(id)arg2;
+ (id)limitString:(id)arg1 toMaxLength:(unsigned long long)arg2 providingSubstitutionMap:(id)arg3;
+ (bool)numberIsEqual:(id)arg1 to:(id)arg2;
+ (bool)objectIsEqual:(id)arg1 to:(id)arg2;
+ (bool)setFileMetadata:(const char *)arg1 forKey:(id)arg2 value:(id)arg3;
+ (id)sharedCore;
+ (id)sharedSUCoreDomainAppending:(id)arg1;
+ (id)stringFromDate:(id)arg1;
+ (id)stringFromTriState:(long long)arg1;
+ (bool)stringIsEqual:(id)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (id)baseDomain;
- (id)buildError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;
- (id)commonDomain;
- (id)commonFilesystemBaseDir;
- (id)completionQueue;
- (id)delegateCallbackQueue;
- (id)filesystemBaseDir;
- (id)init;
- (id)selectCompletionQueue:(id)arg1;
- (id)selectDelegateCallbackQueue:(id)arg1;
- (void)setBaseDomain:(id)arg1;
- (void)setFilesystemBaseDir:(id)arg1;
- (void)useDomain:(id)arg1;
- (void)useFilesystemBaseDir:(id)arg1;
- (id)waitedOperationQueue;

@end
