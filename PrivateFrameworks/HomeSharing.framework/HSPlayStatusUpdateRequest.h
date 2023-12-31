
@interface HSPlayStatusUpdateRequest : HSRequest {
    unsigned int  _interfaceID;
    unsigned int  _revisionID;
}

@property (nonatomic, readonly) unsigned int interfaceID;
@property (nonatomic, readonly) unsigned int revisionID;

- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 revisionID:(unsigned int)arg2;
- (unsigned int)interfaceID;
- (bool)isConcurrent;
- (unsigned int)revisionID;
- (double)timeoutInterval;

@end
