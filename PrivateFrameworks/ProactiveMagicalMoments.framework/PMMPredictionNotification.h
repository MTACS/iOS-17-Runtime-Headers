
@interface PMMPredictionNotification : NSObject {
    id  _notificationToken;
}

+ (void)postPredictionUpdate:(id)arg1 consumer:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPredictionUpdateListener:(id /* block */)arg1;

@end
