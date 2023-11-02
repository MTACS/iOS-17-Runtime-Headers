
@interface QLDismissAction : NSObject {
    long long  _alertStyle;
    unsigned long long  _attributes;
    id /* block */  _completionHandler;
    UIImage * _image;
    bool  _shouldDismissQuickLookAutomatically;
    NSString * _title;
}

@property (nonatomic) long long alertStyle;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) bool shouldDismissQuickLookAutomatically;
@property (nonatomic, readonly) NSString *title;

+ (id)actionWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(bool)arg3 handler:(id /* block */)arg4;
+ (id)actionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 alertStyle:(long long)arg3 shouldDismissQuickLookAutomatically:(bool)arg4 handler:(id /* block */)arg5;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 shouldDismissQuickLookAutomatically:(bool)arg3 handler:(id /* block */)arg4;

- (void).cxx_destruct;
- (long long)alertStyle;
- (unsigned long long)attributes;
- (id /* block */)completionHandler;
- (id)image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 shouldDismissQuickLookAutomatically:(bool)arg3 handler:(id /* block */)arg4;
- (void)setAlertStyle:(long long)arg1;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setShouldDismissQuickLookAutomatically:(bool)arg1;
- (bool)shouldDismissQuickLookAutomatically;
- (id)title;

@end
