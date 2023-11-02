
@interface MapsSuggestionsCarplayDisconnectedCondition : MapsSuggestionsBaseCondition <CARSessionObserving> {
    CARSessionStatus * _carSessionStatus;
    double  _disconnectDelay;
    NSDate * _disconnectTime;
    bool  _isInitialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *disconnectTime;
@property (readonly) unsigned long long hash;
@property bool isInitialized;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)disconnectTime;
- (id)initWithDisconnectDelay:(double)arg1;
- (bool)isInitialized;
- (bool)isTrue;
- (void)sessionDidDisconnect:(id)arg1;
- (void)setDisconnectTime:(id)arg1;
- (void)setIsInitialized:(bool)arg1;

@end
