
@protocol _PGBackgroundPIPServiceConnectionTargetDelegate <NSObject>

@required

- (void)backgroundPIPTargetDidInvalidate:(_PGBackgroundPIPServiceConnectionTarget *)arg1;
- (void)backgroundPIPTargetRequestsAuthorization:(_PGBackgroundPIPServiceConnectionTarget *)arg1;

@end
