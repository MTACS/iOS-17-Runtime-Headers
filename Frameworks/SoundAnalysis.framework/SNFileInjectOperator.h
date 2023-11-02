
@interface SNFileInjectOperator : NSObject <SNOperator> {
    void format;
    void inputFile;
    void offsetInInputfile;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithAudioFileURL:(id)arg1 format:(id)arg2 error:(id*)arg3;
- (void)processInput:(id)arg1 portID:(id)arg2 downstreamHandler:(id /* block */)arg3;
- (void)processTerminationWithOptionalError:(id)arg1 portID:(id)arg2 downstreamHandler:(id /* block */)arg3;

@end
