
@interface NADelegateMethodLogSettings : NSObject {
    id /* block */  _argumentFormatter;
    NSObject<OS_os_log> * _log;
    unsigned char  _logType;
    id /* block */  _logger;
}

@property (nonatomic, readonly, copy) id /* block */ argumentFormatter;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) unsigned char logType;
@property (nonatomic, copy) id /* block */ logger;

- (void).cxx_destruct;
- (id /* block */)argumentFormatter;
- (id)formattedDescriptionForArgument:(id)arg1;
- (id)init;
- (id)initWithLog:(id)arg1 logType:(unsigned char)arg2 argumentFormatter:(id /* block */)arg3;
- (id)log;
- (unsigned char)logType;
- (id /* block */)logger;
- (void)setLogger:(id /* block */)arg1;

@end
