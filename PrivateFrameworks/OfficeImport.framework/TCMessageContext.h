
@interface TCMessageContext : NSObject {
    NSObject<OS_dispatch_queue> * mMessageSyncQueue;
    NSMutableArray * m_affectedObjectStack;
    NSMutableSet * m_errors;
    NSMutableDictionary * m_placeholderToObjectMap;
    NSMutableSet * m_warnings;
}

+ (void)createContextForCurrentThread;
+ (id)currentObjectOrPlaceholder;
+ (id)getErrorArray;
+ (unsigned long long)getErrorCount;
+ (id)getWarningArray;
+ (void)initialize;
+ (bool)isFileStructuredStorage;
+ (void)popAffectedObject;
+ (void)popAffectedObjectPlaceholder:(id)arg1;
+ (void)pushAffectedObject:(id)arg1;
+ (void)pushAffectedObjectPlaceholder;
+ (void)removeContextForCurrentThread;
+ (void)reportError:(id)arg1;
+ (void)reportErrorException:(id)arg1;
+ (void)reportObject:(id)arg1 withWarning:(id)arg2;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(id)arg2 parameters:(char *)arg3;
+ (void)reportWarning:(id)arg1;
+ (void)reportWarningException:(id)arg1;
+ (void)reportWarningsToDelegate;
+ (void)restoreAffectedObjectStack:(unsigned long long)arg1;
+ (unsigned long long)saveAffectedObjectStack;
+ (void)setIsFileStructuredStorage:(bool)arg1;

- (void).cxx_destruct;
- (void)addErrorMessageEntry:(id)arg1;
- (void)addWarningMessageEntry:(id)arg1;
- (id)currentObjectOrPlaceholder;
- (void)dealloc;
- (id)init;
- (void)popAffectedObject;
- (void)popAffectedObjectPlaceholder:(id)arg1;
- (void)pushAffectedObject:(id)arg1;
- (void)pushAffectedObjectPlaceholder;
- (void)replacePlaceholdersWithObjects;
- (void)reportWarningForObject:(id)arg1 warning:(id)arg2 parameterList:(char *)arg3;
- (void)reportWarningsToDelegate;
- (void)resolveObjectOfCurrentAffectedObjectPlaceholder;
- (void)restoreAffectedObjectStack:(unsigned long long)arg1;
- (unsigned long long)saveAffectedObjectStack;
- (void)setAffectedObject:(id)arg1 forPlaceholderWithKey:(id)arg2;

@end
