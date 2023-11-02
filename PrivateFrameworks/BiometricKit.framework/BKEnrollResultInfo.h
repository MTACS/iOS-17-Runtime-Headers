
@interface BKEnrollResultInfo : NSObject {
    BKIdentity * _enrolledIdentity;
}

@property (nonatomic, retain) BKIdentity *enrolledIdentity;

- (void).cxx_destruct;
- (id)enrolledIdentity;
- (id)initWithServerIdentity:(id)arg1 details:(id)arg2 device:(id)arg3;
- (void)setEnrolledIdentity:(id)arg1;

@end
