
@interface CSVoiceTriggerInfo : NSObject {
    long long  _firstPassRunningMode;
}

@property (nonatomic) long long firstPassRunningMode;

+ (id)sharedInstance;

- (long long)firstPassRunningMode;
- (id)init;
- (void)setFirstPassRunningMode:(long long)arg1;

@end
