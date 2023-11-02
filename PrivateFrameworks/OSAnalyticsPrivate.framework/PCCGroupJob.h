
@interface PCCGroupJob : PCCJob {
    unsigned int  _consecutive_error_count;
    NSDictionary * _content;
    unsigned int  _error_count;
    NSString * _group_type;
    NSMutableArray * _log_sets;
    unsigned int  _rejected_count;
    unsigned int  _success_count;
    unsigned int  _total_count;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3;
- (void)prepareNext;
- (void)registerResult:(bool)arg1 error:(id)arg2;
- (id)result;
- (id)type;

@end
