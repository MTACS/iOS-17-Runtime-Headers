
@interface MICandidateContainer : NSObject <NSCopying> {
    NSString * _identifier;
    NSDictionary * _metadata;
    NSURL * _rootURL;
}

@property (nonatomic, readonly) long long estimatedSize;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isAppleApp;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) NSURL *rootURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)estimatedSize;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithContainerURL:(id)arg1 identifier:(id)arg2 metadata:(id)arg3;
- (bool)isAppleApp;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)rootURL;

@end
