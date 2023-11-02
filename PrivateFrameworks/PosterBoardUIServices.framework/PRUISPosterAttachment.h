
@interface PRUISPosterAttachment : NSObject {
    long long  _level;
    UIView * _view;
}

@property (nonatomic, readonly) long long level;
@property (nonatomic, retain) UIView *view;

+ (id)attachmentWithImage:(id)arg1 level:(long long)arg2;
+ (id)attachmentWithView:(id)arg1 level:(long long)arg2;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (long long)level;
- (void)setView:(id)arg1;
- (id)view;

@end
