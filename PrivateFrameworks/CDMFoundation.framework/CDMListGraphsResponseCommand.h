
@interface CDMListGraphsResponseCommand : CDMBaseCommand {
    NSOrderedSet * _availableServiceGraphs;
}

@property (nonatomic, readonly) NSOrderedSet *availableServiceGraphs;

- (void).cxx_destruct;
- (id)availableServiceGraphs;
- (id)initWithGraphs:(id)arg1;

@end
