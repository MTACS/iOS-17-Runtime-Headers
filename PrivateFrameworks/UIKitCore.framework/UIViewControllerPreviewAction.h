
@interface UIViewControllerPreviewAction : NSObject <NSCopying> {
    id /* block */  _handler;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *title;

+ (id)actionWithTitle:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
