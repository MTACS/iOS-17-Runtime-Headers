
@interface FPProcessGroupMinimal : NSObject {
    unsigned long long  _hashValue;
    NSMutableSet * _processes;
}

@property (nonatomic, retain) NSMutableSet *processes;

- (void).cxx_destruct;
- (void)addProcess:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initUniqueProcessGroup;
- (bool)isEqual:(id)arg1;
- (id)processes;
- (void)setProcesses:(id)arg1;

@end
