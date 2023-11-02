
@interface _NSKeyValueDidWillStats : NSObject {
    long long  _count;
    struct { 
        bool hasBecomeReentrant; 
        bool hasExcessiveDids; 
        bool hasWillDidThreadMismatch; 
    }  _detectedIssues;
    bool  _hasDecreased;
    NSThread * _originalThread;
}

- (void)_recordThread;
- (void)dealloc;

@end
