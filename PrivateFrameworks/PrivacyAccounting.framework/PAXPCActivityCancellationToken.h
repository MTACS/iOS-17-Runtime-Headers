
@interface PAXPCActivityCancellationToken : NSObject <PACancellationToken> {
    NSObject<OS_xpc_object> * _activity;
}

@property (readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)cancelled;
- (id)initWithActivity:(id)arg1;

@end
