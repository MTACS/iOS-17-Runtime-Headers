
@interface BAURLDownload : BADownload <NSCopying> {
    NSURLRequest * _request;
}

@property (retain) NSURLRequest *request;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 applicationGroupIdentifier:(id)arg3;
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 applicationGroupIdentifier:(id)arg3 priority:(long long)arg4;
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 essential:(bool)arg3 fileSize:(unsigned long long)arg4 applicationGroupIdentifier:(id)arg5 priority:(long long)arg6;
- (id)initWithIdentifier:(id)arg1 request:(id)arg2 fileSize:(unsigned long long)arg3 applicationGroupIdentifier:(id)arg4;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)syncTo:(id)arg1;

@end
