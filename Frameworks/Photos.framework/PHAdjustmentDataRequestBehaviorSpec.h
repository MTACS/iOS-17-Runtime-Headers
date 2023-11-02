
@interface PHAdjustmentDataRequestBehaviorSpec : NSObject {
    bool  _networkAccessAllowed;
    bool  _synchronous;
}

@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (getter=isSynchronous, nonatomic) bool synchronous;

- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setSynchronous:(bool)arg1;

@end
