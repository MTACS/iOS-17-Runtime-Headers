
@interface _PSZKWFTCalendarEventConfig : NSObject {
    long long  _defaultConfidenceCategory;
    double  _endSecondsFromQuery;
    bool  _isEnabled;
    unsigned long long  _maxOtherParticipants;
    double  _startSecondsFromQuery;
    NSArray * _urlDomainsToSkip;
}

@property (nonatomic, readonly) long long defaultConfidenceCategory;
@property (nonatomic, readonly) double endSecondsFromQuery;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) unsigned long long maxOtherParticipants;
@property (nonatomic, readonly) double startSecondsFromQuery;
@property (nonatomic, readonly, copy) NSArray *urlDomainsToSkip;

- (void).cxx_destruct;
- (long long)defaultConfidenceCategory;
- (double)endSecondsFromQuery;
- (id)initWithIsEnabled:(bool)arg1 defaultConfidenceCategory:(long long)arg2;
- (id)initWithIsEnabled:(bool)arg1 defaultConfidenceCategory:(long long)arg2 startSecondsFromQuery:(double)arg3 endSecondsFromQuery:(double)arg4 urlDomainsToSkip:(id)arg5 maxOtherParticipants:(unsigned long long)arg6;
- (bool)isEnabled;
- (unsigned long long)maxOtherParticipants;
- (double)startSecondsFromQuery;
- (id)urlDomainsToSkip;

@end
