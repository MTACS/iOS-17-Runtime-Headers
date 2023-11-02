
@interface TITraceLogRecordContextEntry : NSObject {
    NSString * _token;
    NSString * _wordID;
}

@property (nonatomic, retain) NSString *token;
@property (nonatomic, retain) NSString *wordID;

- (void).cxx_destruct;
- (id)initWithToken:(id)arg1 wordID:(id)arg2;
- (void)setToken:(id)arg1;
- (void)setWordID:(id)arg1;
- (id)token;
- (id)wordID;

@end
