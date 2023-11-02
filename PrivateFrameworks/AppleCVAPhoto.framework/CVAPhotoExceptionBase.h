
@interface CVAPhotoExceptionBase : NSException

- (id)error;
- (int)getErrorCode;
- (id)getReasonStr;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (void)log;

@end
