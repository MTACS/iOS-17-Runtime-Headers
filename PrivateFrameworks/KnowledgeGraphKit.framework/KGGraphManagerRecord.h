
@interface KGGraphManagerRecord : NSObject {
    KGGraphManager * _graphManager;
    unsigned long long  _useCount;
}

@property (nonatomic, retain) KGGraphManager *graphManager;
@property (nonatomic) unsigned long long useCount;

- (void).cxx_destruct;
- (bool)decrementUseCount;
- (id)graphManager;
- (void)incrementUseCount;
- (id)initWithGraphManager:(id)arg1;
- (void)setGraphManager:(id)arg1;
- (void)setUseCount:(unsigned long long)arg1;
- (unsigned long long)useCount;

@end
