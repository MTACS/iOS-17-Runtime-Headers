
@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider> {
    id  _apsConnection;
}

@property (nonatomic, readonly) id apsConnection;

- (void).cxx_destruct;
- (id)apsConnection;
- (id)init;
- (bool)isAccurate;
- (unsigned long long)serverTimeInNanoSeconds;

@end
