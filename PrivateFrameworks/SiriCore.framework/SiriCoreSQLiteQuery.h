
@interface SiriCoreSQLiteQuery : NSObject {
    unsigned long long  _options;
    NSArray * _parameters;
    <SiriCoreSQLiteRecordBuilder> * _recordBuilder;
    SiriCoreSQLiteStatement * _statement;
    NSString * _string;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSArray *parameters;
@property (nonatomic, readonly) <SiriCoreSQLiteRecordBuilder> *recordBuilder;
@property (nonatomic, readonly) SiriCoreSQLiteStatement *statement;
@property (nonatomic, readonly, copy) NSString *string;

- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 recordBuilder:(id)arg4 options:(unsigned long long)arg5;
- (unsigned long long)options;
- (id)parameters;
- (id)recordBuilder;
- (id)statement;
- (id)string;

@end
