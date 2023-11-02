
@interface WPDPendingCompletions : NSObject {
    unsigned long long  _lastID;
    NSString * _name;
    NSMutableArray * _pendingCompletions;
}

@property unsigned long long lastID;
@property (retain) NSString *name;
@property (retain) NSMutableArray *pendingCompletions;

- (void).cxx_destruct;
- (unsigned long long)addCompletion:(id)arg1;
- (void)completeID:(unsigned long long)arg1 success:(bool)arg2;
- (id)description;
- (id)initWithName:(id)arg1;
- (unsigned long long)lastID;
- (id)name;
- (id)pendingCompletions;
- (void)setLastID:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setPendingCompletions:(id)arg1;

@end
