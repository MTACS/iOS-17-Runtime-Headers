
@interface FAHTTPResponse : NSObject {
    NSHTTPURLResponse * _HTTPResponse;
    id  _body;
    bool  _familyRefreshTriggered;
}

@property (nonatomic, readonly) NSHTTPURLResponse *HTTPResponse;
@property (nonatomic, readonly) id body;
@property (nonatomic) bool familyRefreshTriggered;

- (void).cxx_destruct;
- (id)HTTPResponse;
- (id)body;
- (bool)familyRefreshTriggered;
- (id)initWithHTTPResponse:(id)arg1 body:(id)arg2;
- (id)initWithHTTPResponse:(id)arg1 body:(id)arg2 familyRefreshTriggered:(bool)arg3;
- (void)setFamilyRefreshTriggered:(bool)arg1;

@end
