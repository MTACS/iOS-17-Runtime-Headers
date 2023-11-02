
@interface IDSTransactionQueueTransaction : NSObject {
    id  _item;
    bool  _readyToExecute;
}

@property (nonatomic, retain) id item;
@property (nonatomic) bool readyToExecute;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 readyToExecute:(bool)arg2;
- (id)item;
- (bool)readyToExecute;
- (void)setItem:(id)arg1;
- (void)setReadyToExecute:(bool)arg1;

@end
