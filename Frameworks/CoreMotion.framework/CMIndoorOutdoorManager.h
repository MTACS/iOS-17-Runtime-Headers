
@interface CMIndoorOutdoorManager : NSObject {
    <CMIndoorOutdoorDelegate> * _delegate;
    CMIndoorOutdoorManagerInternal * _internal;
}

@property (nonatomic) <CMIndoorOutdoorDelegate> *delegate;

+ (bool)isIndoorOutdoorStateAvailable;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)lastKnownIndoorOutdoorStateWithHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startIndoorOutdoorUpdates;
- (void)stopIndoorOutdoorUpdates;

@end
