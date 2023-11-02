
@interface CKException : NSException

@property (nonatomic, readonly) int errorCode;

- (id)error;
- (int)errorCode;
- (id)initWithCode:(int)arg1 format:(id)arg2;
- (id)initWithCode:(int)arg1 format:(id)arg2 args:(char *)arg3;
- (id)initWithName:(id)arg1 format:(id)arg2;
- (id)initWithName:(id)arg1 format:(id)arg2 args:(char *)arg3;

@end
