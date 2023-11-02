
@interface CUIKORContentImageRequest : NSObject {
    unsigned long long  _options;
    long long  _requestId;
    id /* block */  _resultHandler;
    CUIKOROccurrenceState * _state;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long requestId;
@property (nonatomic, readonly) id /* block */ resultHandler;
@property (nonatomic, readonly) CUIKOROccurrenceState *state;

- (void).cxx_destruct;
- (id)initWithId:(long long)arg1 options:(unsigned long long)arg2 state:(id)arg3 resultHandler:(id /* block */)arg4;
- (unsigned long long)options;
- (long long)requestId;
- (id /* block */)resultHandler;
- (id)state;

@end
