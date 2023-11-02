
@interface WFHarnessActionContext : NSObject {
    NSString * _identifier;
    unsigned long long  _indexInWorkflow;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long indexInWorkflow;

- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)indexInWorkflow;
- (id)initWithIdentifier:(id)arg1 indexInWorkflow:(unsigned long long)arg2;

@end
