
@interface UIKBAutoFillTestTagRequest : NSObject {
    long long  _requestType;
    UIView * _view;
}

@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)initWithRequestType:(long long)arg1 view:(id)arg2;
- (long long)requestType;
- (id)view;

@end
