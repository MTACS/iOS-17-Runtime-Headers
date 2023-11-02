
@interface OBSplashBullet : NSObject {
    OBImage * _icon;
    NSString * _text;
}

@property (retain) OBImage *icon;
@property (copy) NSString *text;

- (void).cxx_destruct;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
