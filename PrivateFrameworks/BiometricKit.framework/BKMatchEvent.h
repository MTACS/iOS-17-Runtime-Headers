
@interface BKMatchEvent : NSObject {
    BKIdentity * _matchedIdentity;
    bool  _result;
    unsigned long long  _timeStamp;
}

@property (nonatomic, retain) BKIdentity *matchedIdentity;
@property (nonatomic) bool result;
@property (nonatomic) unsigned long long timeStamp;

+ (id)matchEventWithDictionary:(id)arg1 device:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)matchedIdentity;
- (bool)result;
- (void)setMatchedIdentity:(id)arg1;
- (void)setResult:(bool)arg1;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)timeStamp;

@end
