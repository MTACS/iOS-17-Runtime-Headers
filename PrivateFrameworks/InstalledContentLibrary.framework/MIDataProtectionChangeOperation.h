
@interface MIDataProtectionChangeOperation : NSObject {
    id /* block */  _completionBlock;
    int  _newClass;
    unsigned long long  _operationType;
    NSArray * _urls;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) int newClass;
@property (nonatomic, readonly) unsigned long long operationType;
@property (nonatomic, readonly) NSArray *urls;

+ (id)dataProtectionChangeOperationForURL:(id)arg1 settingClass:(int)arg2 changeType:(unsigned long long)arg3;
+ (id)dataProtectionChangeOperationForURLs:(id)arg1 settingClass:(int)arg2 changeType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (bool)_runChangeOperationWasLocked:(bool*)arg1 withError:(id*)arg2;
- (id /* block */)completionBlock;
- (id)initWithURLs:(id)arg1 newClass:(int)arg2 changeType:(unsigned long long)arg3;
- (int)newClass;
- (unsigned long long)operationType;
- (void)performChangeOperation;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)urls;

@end
