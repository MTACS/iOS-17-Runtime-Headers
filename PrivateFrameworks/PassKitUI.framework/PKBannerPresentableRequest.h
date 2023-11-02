
@interface PKBannerPresentableRequest : NSObject {
    id  _context;
    PKBannerPresentable * _presentable;
}

@property (nonatomic, readonly) id context;
@property (nonatomic, readonly) PKBannerPresentable *presentable;

+ (id)createWithPresentable:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)context;
- (id)init;
- (id)presentable;

@end
