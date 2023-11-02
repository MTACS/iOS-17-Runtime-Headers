
@interface IOKPowerManager : NSObject {
    unsigned int  _connection;
}

+ (bool)isSleepEnabled;
+ (id)powerManager;

- (void)dealloc;
- (id)init;
- (bool)sleepSystemWithError:(id*)arg1;

@end
