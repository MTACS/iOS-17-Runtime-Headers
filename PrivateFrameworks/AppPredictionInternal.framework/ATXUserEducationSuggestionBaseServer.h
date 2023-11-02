
@interface ATXUserEducationSuggestionBaseServer : NSObject {
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)init;
- (void)performBlockOnInternalSerialQueue:(id /* block */)arg1;
- (id)serialQueue;

@end
