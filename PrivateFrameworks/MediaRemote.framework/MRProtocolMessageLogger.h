
@interface MRProtocolMessageLogger : NSObject {
    bool  _shouldLog;
    bool  _shouldVerboselyLog;
}

@property (nonatomic) bool shouldLog;
@property (nonatomic) bool shouldVerboselyLog;

+ (id)sharedLogger;

- (id)init;
- (void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3;
- (void)setShouldLog:(bool)arg1;
- (void)setShouldVerboselyLog:(bool)arg1;
- (bool)shouldLog;
- (bool)shouldVerboselyLog;

@end
