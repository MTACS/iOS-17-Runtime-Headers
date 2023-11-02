
@interface WLQRCode : NSObject {
    NSString * _code;
    NSString * _name;
    NSString * _title;
    NSString * _url;
}

@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (id)code;
- (id)createQRCodeImage:(double)arg1;
- (id)initWithName:(id)arg1 title:(id)arg2 URL:(id)arg3 code:(id)arg4;
- (id)name;
- (void)setCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
