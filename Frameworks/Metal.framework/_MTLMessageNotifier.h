
@interface _MTLMessageNotifier : NSObject {
    MTLMessageFilter * _filter;
    id /* block */  _handler;
}

@property (readonly, retain) MTLMessageFilter *filter;
@property (readonly) id /* block */ handler;

- (void)dealloc;
- (id)filter;
- (id /* block */)handler;
- (id)init:(id /* block */)arg1 filter:(id)arg2;

@end
