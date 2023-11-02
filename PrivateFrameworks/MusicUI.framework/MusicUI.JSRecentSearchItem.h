
@interface MusicUI.JSRecentSearchItem : NSObject <MusicUI.JSRecentSearchItemExports> {
    void $__lazy_storage_$_context;
    void _contentDescriptor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _timestamp;
}

@property (nonatomic, readonly) JSValue *contentDescriptor;
@property (nonatomic, readonly) JSValue *timestamp;

- (void).cxx_destruct;
- (id)contentDescriptor;
- (id)init;
- (id)timestamp;

@end
