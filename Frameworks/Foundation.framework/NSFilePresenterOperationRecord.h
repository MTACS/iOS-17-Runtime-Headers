
@interface NSFilePresenterOperationRecord : NSObject {
    NSString * operationDescription;
    id  reactor;
    NSString * reactorID;
    long long  state;
}

@property (readonly) NSString *operationDescription;
@property (readonly) id reactor;
@property (readonly) long long state;

+ (id)operationRecordWithDescription:(id)arg1 reactor:(id)arg2;

- (void).cxx_destruct;
- (id)_reactorQueue;
- (void)dealloc;
- (id)description;
- (void)didBegin;
- (void)didEnd;
- (id)operationDescription;
- (id)reactor;
- (long long)state;
- (void)willEnd;

@end
