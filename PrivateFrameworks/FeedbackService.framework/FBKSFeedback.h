
@interface FBKSFeedback : NSObject {
    long long  _ID;
    FBKSFeedback_FrameworkPrivateName * _swiftObject;
}

@property (nonatomic) long long ID;
@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) NSString *formIdentifier;
@property (nonatomic, readonly) NSDate *submissionDate;
@property (nonatomic, retain) FBKSFeedback_FrameworkPrivateName *swiftObject;

- (void).cxx_destruct;
- (long long)ID;
- (id)build;
- (id)description;
- (id)formIdentifier;
- (id)initWithSwiftObject:(id)arg1;
- (void)setID:(long long)arg1;
- (void)setSwiftObject:(id)arg1;
- (id)submissionDate;
- (id)swiftObject;

@end
