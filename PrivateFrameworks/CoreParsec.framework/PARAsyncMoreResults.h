
@interface PARAsyncMoreResults : SFMoreResults {
    unsigned long long  _clientQueryId;
    NSURL * _moreResultsURL;
    unsigned long long  _queryId;
    double  _scale;
}

@property (nonatomic, readonly) unsigned long long clientQueryId;
@property (nonatomic, readonly, copy) NSURL *moreResultsURL;
@property (nonatomic, readonly) unsigned long long queryId;
@property (nonatomic) double scale;

+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)clientQueryId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)moreResultsURL;
- (unsigned long long)queryId;
- (double)scale;
- (void)setScale:(double)arg1;

@end
