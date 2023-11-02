
@interface SCUIInterventionScreenBullet : NSObject {
    NSString * _emoji;
    NSString * _imageName;
    NSString * _text;
}

@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *text;

+ (id)bullet:(id)arg1 imageName:(id)arg2 emoji:(id)arg3;

- (void).cxx_destruct;
- (id)emoji;
- (id)imageName;
- (void)setEmoji:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
