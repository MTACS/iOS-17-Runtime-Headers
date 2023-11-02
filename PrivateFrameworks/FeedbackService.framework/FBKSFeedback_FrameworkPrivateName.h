
@interface FBKSFeedback_FrameworkPrivateName : NSObject {
    void build;
    void formIdentifier;
    void id;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  submissionDate;
}

@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *formIdentifier;
@property (nonatomic, readonly) long long id;
@property (nonatomic, readonly) NSDate *submissionDate;

- (void).cxx_destruct;
- (id)build;
- (id)description;
- (id)formIdentifier;
- (long long)id;
- (id)init;
- (id)submissionDate;

@end
