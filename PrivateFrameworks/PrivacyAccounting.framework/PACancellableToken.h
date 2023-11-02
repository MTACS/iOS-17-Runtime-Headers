
@interface PACancellableToken : NSObject <PACancellationToken> {
    _Atomic bool  _cancelled;
}

@property (readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (bool)cancelled;
- (id)init;

@end
