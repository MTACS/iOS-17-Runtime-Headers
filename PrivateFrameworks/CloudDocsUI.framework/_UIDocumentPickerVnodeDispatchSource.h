
@interface _UIDocumentPickerVnodeDispatchSource : NSObject <NSCopying> {
    NSObject<OS_dispatch_source> * _source;
    <_UIDocumentPickerVnodeDispatchSourceDelegate> * _target;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)event;
- (id)initWithTarget:(id)arg1 url:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (id)url;

@end
