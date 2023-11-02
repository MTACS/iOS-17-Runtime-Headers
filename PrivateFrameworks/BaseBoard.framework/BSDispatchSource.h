
@interface BSDispatchSource : NSObject <BSInvalidatable> {
    int  _activated;
    id /* block */  _cancelHandler;
    id /* block */  _eventHandler;
    int  _invalidated;
    NSObject<OS_dispatch_source> * _source;
    struct dispatch_source_type_s { } * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end
