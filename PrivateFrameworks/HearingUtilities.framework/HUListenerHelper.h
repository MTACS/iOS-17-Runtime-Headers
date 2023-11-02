
@interface HUListenerHelper : NSObject {
    <HUListenerHelperDelegate> * _delegate;
    id  _listenerAddress;
}

+ (id)listenerHelperWithListener:(id)arg1 andDelegate:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithListener:(id)arg1 andDelegate:(id)arg2;

@end
