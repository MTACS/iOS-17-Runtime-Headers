
@interface _CPInhibitorManager : NSObject {
    NSMutableDictionary * _inhibitorMap;
    NSLock * _inhibitorMapLock;
    bool  _isProcessRunningBoardManaged;
    NSObject<OS_os_log> * _os_log;
    NSArray * _runningBoardAttributes;
    RBSTarget * _runningBoardTarget;
}

@property (nonatomic, retain) NSMutableDictionary *inhibitorMap;
@property (nonatomic, retain) NSLock *inhibitorMapLock;
@property (nonatomic) bool isProcessRunningBoardManaged;
@property (nonatomic, retain) NSObject<OS_os_log> *os_log;
@property (nonatomic, retain) NSArray *runningBoardAttributes;
@property (nonatomic, retain) RBSTarget *runningBoardTarget;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)inhibitorMap;
- (id)inhibitorMapLock;
- (id)init;
- (bool)isProcessRunningBoardManaged;
- (id)os_log;
- (id)popAssertionWithIdentifier:(id)arg1;
- (void)pushAssertion:(id)arg1 withIdentifier:(id)arg2;
- (id)runningBoardAttributes;
- (id)runningBoardTarget;
- (void)setInhibitorMap:(id)arg1;
- (void)setInhibitorMapLock:(id)arg1;
- (void)setIsProcessRunningBoardManaged:(bool)arg1;
- (void)setOs_log:(id)arg1;
- (void)setRunningBoardAttributes:(id)arg1;
- (void)setRunningBoardTarget:(id)arg1;
- (id)startAnInhibitor;
- (void)stopInhibitorWithIdentifier:(id)arg1;

@end
