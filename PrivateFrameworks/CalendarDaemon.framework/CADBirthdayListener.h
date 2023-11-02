
@interface CADBirthdayListener : NSObject {
    <CalBirthdayListener> * _ekBirthdayListener;
    Class  _listenerClass;
}

@property (nonatomic, retain) <CalBirthdayListener> *ekBirthdayListener;
@property (nonatomic, retain) Class listenerClass;

+ (bool)birthdayCalendarEnabled;
+ (void)reset;
+ (void)setBirthdayCalendarEnabled:(bool)arg1;
+ (id)sharedListener;
+ (void)start;

- (void).cxx_destruct;
- (bool)birthdayCalendarEnabled;
- (id)ekBirthdayListener;
- (id)init;
- (Class)listenerClass;
- (void)reset;
- (void)setBirthdayCalendarEnabled:(bool)arg1;
- (void)setEkBirthdayListener:(id)arg1;
- (void)setListenerClass:(Class)arg1;
- (void)start;

@end
