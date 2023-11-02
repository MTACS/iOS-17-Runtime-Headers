
@interface QSSMutableFinalBlazarResponse : QSSFinalBlazarResponse

@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (int)return_code;
- (id)return_str;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;

@end
