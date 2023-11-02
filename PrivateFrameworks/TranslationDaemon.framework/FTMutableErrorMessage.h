
@interface FTMutableErrorMessage : FTErrorMessage

@property (nonatomic) unsigned int error_code;
@property (nonatomic, copy) NSString *reason;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)error_code;
- (id)init;
- (id)reason;
- (void)setError_code:(unsigned int)arg1;
- (void)setReason:(id)arg1;

@end
