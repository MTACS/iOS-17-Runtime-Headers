
@interface GEODataURLSessionTaskIdentifier : NSObject <NSCopying> {
    unsigned long long  _hash;
    long long  _sessionIdentity;
    unsigned long long  _taskIdentifier;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSession:(id)arg1 task:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
