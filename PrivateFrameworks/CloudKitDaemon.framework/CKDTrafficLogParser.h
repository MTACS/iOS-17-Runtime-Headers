
@interface CKDTrafficLogParser : NSObject {
    void lock;
}

- (void).cxx_destruct;
- (id)consumeParsedTrafficLogsAndReturnError:(id*)arg1;
- (id)init;
- (bool)parse:(id)arg1 error:(id*)arg2;

@end
