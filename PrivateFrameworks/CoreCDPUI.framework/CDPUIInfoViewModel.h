
@interface CDPUIInfoViewModel : NSObject <NSCopying> {
    NSString * _message;
    CDPEscapeOption * _option1;
    CDPEscapeOption * _option2;
    NSString * _title;
}

@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) CDPEscapeOption *option1;
@property (nonatomic, retain) CDPEscapeOption *option2;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)message;
- (id)option1;
- (id)option2;
- (void)setMessage:(id)arg1;
- (void)setOption1:(id)arg1;
- (void)setOption2:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
