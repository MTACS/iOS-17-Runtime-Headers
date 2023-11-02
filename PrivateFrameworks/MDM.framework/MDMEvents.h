
@interface MDMEvents : NSObject {
    NSObject<OS_dispatch_queue> * _writerQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)recordData:(id)arg1 forEvent:(id)arg2;
- (void)recordDateForEvent:(id)arg1;

@end
