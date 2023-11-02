
@interface SXPasteboardActionActivity : NSObject <SXActionActivity> {
    UIImage * _image;
    NSString * _label;
    UIPasteboard * _pasteboard;
    NSString * _string;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly, copy) UIPasteboard *pasteboard;
@property (nonatomic, readonly, copy) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)image;
- (id)initWithLabel:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3 pasteboard:(id)arg4 string:(id)arg5;
- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 pasteboard:(id)arg3 string:(id)arg4;
- (void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2;
- (id)label;
- (id)pasteboard;
- (id)string;
- (unsigned long long)type;

@end
