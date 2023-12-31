
@interface SiriCoreErrorInfo : NSObject {
    NSError * _error;
    bool  _isPeerConnectionError;
    bool  _isPeerNotNearbyError;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool isPeerConnectionError;
@property (nonatomic) bool isPeerNotNearbyError;

- (void).cxx_destruct;
- (id)error;
- (bool)isPeerConnectionError;
- (bool)isPeerNotNearbyError;
- (void)setError:(id)arg1;
- (void)setIsPeerConnectionError:(bool)arg1;
- (void)setIsPeerNotNearbyError:(bool)arg1;

@end
