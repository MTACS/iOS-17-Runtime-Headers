
@interface CNActionItem : NSObject {
    bool  _disabled;
    UIImage * _image;
    NSString * _title;
    NSString * _type;
}

@property (nonatomic) bool disabled;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)description;
- (bool)disabled;
- (id)image;
- (id)initWithImage:(id)arg1 type:(id)arg2;
- (void)setDisabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)type;

@end
