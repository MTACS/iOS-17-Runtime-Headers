
@interface SFUIActivityImageRequest : SFUIImageRequest {
    UIActivity * _activity;
    long long  _activityCategory;
    NSString * _contentSizeCategory;
    int  _iconFormat;
    UIImageSymbolConfiguration * _imageSymbolConfiguration;
}

@property (nonatomic, readonly) UIActivity *activity;
@property (nonatomic, readonly) long long activityCategory;
@property (nonatomic, readonly) NSString *contentSizeCategory;
@property (nonatomic, readonly) int iconFormat;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageSymbolConfiguration;

- (void).cxx_destruct;
- (id)activity;
- (long long)activityCategory;
- (id)contentSizeCategory;
- (int)iconFormat;
- (id)imageSymbolConfiguration;
- (id)initWithRequestID:(int)arg1 activity:(id)arg2 contentSizeCategory:(id)arg3 imageSymbolConfiguration:(id)arg4 synchronous:(bool)arg5 resultHandler:(id /* block */)arg6;
- (id)initWithRequestID:(int)arg1 identifier:(id)arg2 activityCategory:(long long)arg3 contentSizeCategory:(id)arg4 iconFormat:(int)arg5 synchronous:(bool)arg6 resultHandler:(id /* block */)arg7;

@end
