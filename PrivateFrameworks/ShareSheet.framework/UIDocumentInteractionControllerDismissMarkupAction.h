
@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject {
    id /* block */  _completionHandler;
    UIImage * _image;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *title;

+ (id)actionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
