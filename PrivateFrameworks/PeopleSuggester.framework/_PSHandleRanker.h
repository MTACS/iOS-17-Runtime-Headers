
@interface _PSHandleRanker : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)rankedHandlesFromCandidateHandles:(id)arg1;

@end
