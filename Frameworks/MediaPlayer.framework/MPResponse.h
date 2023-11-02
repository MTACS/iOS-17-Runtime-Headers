
@interface MPResponse : NSObject <NSCopying, NSObject> {
    id  _builder;
    NSArray * _middleware;
    id  _request;
    bool  _valid;
}

@property (nonatomic, readonly) id builder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *middleware;
@property (nonatomic, readonly, copy) id request;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)builderProtocol;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)builder;
- (id)chain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (id)middleware;
- (id)request;
- (void)setMiddleware:(id)arg1;

@end
