
@interface CLIArguments : NSObject {
    NSArray * _arguments;
}

@property (nonatomic, retain) NSArray *arguments;

- (void).cxx_destruct;
- (id)arguments;
- (id)consumeUpToIndex:(long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setArguments:(id)arg1;

@end
