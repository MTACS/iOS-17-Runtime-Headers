
@interface PFBugReport : NSObject {
    void domain;
    void errorKind;
    void forceSubmissionAttempt;
    void system;
}

@property (nonatomic, readonly) NSString *domainString;
@property (nonatomic, readonly) NSString *errorKindString;
@property (nonatomic, readonly) bool forceSubmissionAttempt;
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) NSString *systemString;

- (id)domainString;
- (id)errorKindString;
- (bool)forceSubmissionAttempt;
- (id)init;
- (id)signature;
- (id)systemString;

@end
