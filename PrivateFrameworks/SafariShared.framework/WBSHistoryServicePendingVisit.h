
@interface WBSHistoryServicePendingVisit : NSObject {
    unsigned long long  _attributes;
    bool  _loadSuccessful;
    unsigned long long  _operation;
    long long  _origin;
    WBSHistoryVisitIdentifier * _sourceVisitIdentifier;
    long long  _statusCode;
    NSString * _title;
    WBSHistoryVisitIdentifier * _visitIdentifier;
    bool  _wasHTTPNonGet;
}

@property (nonatomic) unsigned long long attributes;
@property (nonatomic) bool loadSuccessful;
@property (nonatomic) unsigned long long operation;
@property (nonatomic) long long origin;
@property (nonatomic, readonly) unsigned long long score;
@property (nonatomic, retain) WBSHistoryVisitIdentifier *sourceVisitIdentifier;
@property (nonatomic) long long statusCode;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) WBSHistoryVisitIdentifier *visitIdentifier;
@property (nonatomic, readonly) double visitTime;
@property (nonatomic) bool wasHTTPNonGet;

- (void).cxx_destruct;
- (unsigned long long)attributes;
- (id)initWithWithVisitIdentifier:(id)arg1;
- (bool)loadSuccessful;
- (unsigned long long)operation;
- (long long)origin;
- (unsigned long long)score;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setLoadSuccessful:(bool)arg1;
- (void)setOperation:(unsigned long long)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setSourceVisitIdentifier:(id)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setWasHTTPNonGet:(bool)arg1;
- (id)sourceVisitIdentifier;
- (long long)statusCode;
- (id)title;
- (id)urlString;
- (id)visitIdentifier;
- (double)visitTime;
- (bool)wasHTTPNonGet;

@end
