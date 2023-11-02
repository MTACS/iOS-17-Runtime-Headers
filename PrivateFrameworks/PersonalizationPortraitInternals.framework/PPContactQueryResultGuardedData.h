
@interface PPContactQueryResultGuardedData : NSObject {
    NSArray * _cnContacts;
    NSArray * _fiaContacts;
    bool  _joined;
    NSError * _latestError;
}

@property (nonatomic, retain) NSArray *cnContacts;
@property (nonatomic, retain) NSArray *fiaContacts;
@property (nonatomic) bool joined;
@property (nonatomic, retain) NSError *latestError;

- (void).cxx_destruct;
- (id)cnContacts;
- (id)fiaContacts;
- (bool)joined;
- (id)latestError;
- (void)setCnContacts:(id)arg1;
- (void)setFiaContacts:(id)arg1;
- (void)setJoined:(bool)arg1;
- (void)setLatestError:(id)arg1;

@end
