
@interface PGMemoryTriggerResult : NSObject {
    <PGMemoryNodeProtocol> * _memoryNode;
    NSDateInterval * _validityInterval;
}

@property (nonatomic, readonly) <PGMemoryNodeProtocol> *memoryNode;
@property (nonatomic, readonly) NSDateInterval *validityInterval;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMemoryNode:(id)arg1 validityInterval:(id)arg2;
- (id)memoryNode;
- (id)validityInterval;

@end
