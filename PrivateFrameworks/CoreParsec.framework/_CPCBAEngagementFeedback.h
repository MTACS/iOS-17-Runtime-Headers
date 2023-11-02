
@interface _CPCBAEngagementFeedback : PBCodable <NSSecureCoding, _CPCBAEngagementFeedback, _CPProcessableFeedback> {
    int  _cbaType;
    unsigned long long  _queryId;
    unsigned long long  _timestamp;
    NSString * _url;
}

@property (nonatomic) int cbaType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long queryId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (int)cbaType;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)queryId;
- (bool)readFrom:(id)arg1;
- (void)setCbaType:(int)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)timestamp;
- (id)url;
- (void)writeTo:(id)arg1;

@end
