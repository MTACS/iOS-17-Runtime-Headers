
@interface SOAuthorizationPoolItem : NSObject {
    SOAuthorizationCore * _authorization;
    <SOAuthorizationCoreDelegate> * _delegate;
}

@property (nonatomic, readonly) SOAuthorizationCore *authorization;
@property (nonatomic, readonly) <SOAuthorizationCoreDelegate> *delegate;

- (void).cxx_destruct;
- (id)authorization;
- (id)delegate;
- (id)initWithAuthorization:(id)arg1 delegate:(id)arg2;

@end
