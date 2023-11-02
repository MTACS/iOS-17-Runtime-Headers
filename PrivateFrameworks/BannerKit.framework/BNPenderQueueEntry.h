
@interface BNPenderQueueEntry : NSObject {
    NSUUID * _entryIdentifier;
    <BNPending> * _pender;
}

@property (nonatomic, readonly) NSUUID *entryIdentifier;
@property (nonatomic, readonly) <BNPending> *pender;

- (void).cxx_destruct;
- (id)entryIdentifier;
- (id)initWithPender:(id)arg1;
- (id)pender;

@end
