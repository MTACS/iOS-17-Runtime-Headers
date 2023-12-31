
@interface TMLBlockSignalHandler : NSObject <TMLSignalHandler> {
    id /* block */  _block;
    int  _flags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)attach;
- (id)callWithArguments:(id)arg1;
- (void)detach;
- (id)initWithBlock:(id /* block */)arg1;

@end
