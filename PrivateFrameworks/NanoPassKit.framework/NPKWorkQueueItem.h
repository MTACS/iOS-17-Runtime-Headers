
@interface NPKWorkQueueItem : NSObject {
    NPKOSTransaction * _transaction;
    id /* block */  _workBlock;
}

@property (nonatomic, readonly) NPKOSTransaction *transaction;
@property (nonatomic, readonly) id /* block */ workBlock;

+ (id)itemWithTransaction:(id)arg1 work:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)arg1 work:(id /* block */)arg2;
- (id)transaction;
- (id /* block */)workBlock;

@end
