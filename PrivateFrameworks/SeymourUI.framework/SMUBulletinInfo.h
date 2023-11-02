
@interface SMUBulletinInfo : NSObject {
    NSString * _imageSymbolName;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, copy) NSString *imageSymbolName;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)imageSymbolName;
- (id)message;
- (void)setImageSymbolName:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
