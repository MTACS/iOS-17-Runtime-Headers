
@interface _CNTimeProfilingTask : CNTask {
    <CNTaskTimeProfileLogging> * _logger;
    CNTask * _task;
    <CNTimeProvider> * _timeProvider;
}

@property (readonly) <CNTaskTimeProfileLogging> *logger;
@property (readonly) CNTask *task;
@property (readonly) <CNTimeProvider> *timeProvider;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithTask:(id)arg1 timeProvider:(id)arg2 logger:(id)arg3;
- (id)initWithTask:(id)arg1 timeProvider:(id)arg2 os_log:(id)arg3;
- (id)logger;
- (id)run;
- (id)task;
- (id)timeProvider;

@end
