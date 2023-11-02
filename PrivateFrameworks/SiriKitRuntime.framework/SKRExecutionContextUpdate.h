
@interface SKRExecutionContextUpdate : NSObject <NSSecureCoding> {
    void clearActiveTasks;
    void clearCompletedTasks;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  contextUpdateScope;
    void nativeFlowContextCommand;
    void nluActiveTasks;
    void nluCompletedTasks;
    void nluSystemDialogActs;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pommesContext;
    void provideContextCommand;
    void restoreSessionForRequestId;
    void rrEntities;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  undoDirectInvocation;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
