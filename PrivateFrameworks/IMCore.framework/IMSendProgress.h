
@interface IMSendProgress : NSObject {
    float  _cachedSendProgress;
    id  _context;
    <IMSendProgressDelegate> * _delegate;
    NSTimer * _sendProgressTimer;
    NSDictionary * _sendingItems;
    bool  _startSendProgressImmediately;
    <IMSendProgressTimeDataSource> * _timeDataSource;
    bool  _wasShowing;
}

@property (nonatomic) float cachedSendProgress;
@property (nonatomic) id context;
@property (nonatomic) <IMSendProgressDelegate> *delegate;
@property (nonatomic, retain) NSTimer *sendProgressTimer;
@property (nonatomic, copy) NSDictionary *sendingItems;
@property (nonatomic) bool startSendProgressImmediately;
@property (nonatomic, retain) <IMSendProgressTimeDataSource> *timeDataSource;
@property (nonatomic) bool wasShowing;

+ (Class)_timeDataSourceClass;

- (void).cxx_destruct;
- (bool)_hasSendingMessages;
- (void)_resetSendProgress;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_sendProgressTimerFired:(id)arg1;
- (void)_updateSendProgress;
- (float)cachedSendProgress;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;
- (void)invalidate;
- (id)sendProgressTimer;
- (id)sendingItems;
- (void)setCachedSendProgress:(float)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSendProgressTimer:(id)arg1;
- (void)setSendingItems:(id)arg1;
- (void)setStartSendProgressImmediately:(bool)arg1;
- (void)setTimeDataSource:(id)arg1;
- (void)setWasShowing:(bool)arg1;
- (bool)startSendProgressImmediately;
- (id)timeDataSource;
- (void)updateForItems:(id)arg1 forced:(bool)arg2;
- (bool)wasShowing;

@end
