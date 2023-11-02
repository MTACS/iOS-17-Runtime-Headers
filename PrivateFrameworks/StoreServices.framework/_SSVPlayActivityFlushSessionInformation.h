
@interface _SSVPlayActivityFlushSessionInformation : NSObject {
    NSString * _endpointIdentifier;
    NSString * _revisionVersionToken;
    NSIndexSet * _revisionsIndexSet;
    unsigned long long  _sessionToken;
}

@property (nonatomic, copy) NSString *endpointIdentifier;
@property (nonatomic, copy) NSString *revisionVersionToken;
@property (nonatomic, retain) NSIndexSet *revisionsIndexSet;
@property (nonatomic) unsigned long long sessionToken;

- (void).cxx_destruct;
- (id)endpointIdentifier;
- (id)revisionVersionToken;
- (id)revisionsIndexSet;
- (unsigned long long)sessionToken;
- (void)setEndpointIdentifier:(id)arg1;
- (void)setRevisionVersionToken:(id)arg1;
- (void)setRevisionsIndexSet:(id)arg1;
- (void)setSessionToken:(unsigned long long)arg1;

@end
