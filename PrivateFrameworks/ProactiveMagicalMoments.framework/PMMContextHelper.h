
@interface PMMContextHelper : NSObject {
    <_CDLocalContext> * _context;
}

@property (nonatomic, readonly) <_CDLocalContext> *context;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)context;
- (id)fetchContextValueForKeyPath:(id)arg1;
- (id)fetchDataDictionaryForKeyPath:(id)arg1;
- (id)init;
- (void)registerForNotifications:(id)arg1;

@end
