
@interface NMSSHHostConfig : NSObject {
    NSArray * _hostPatterns;
    NSString * _hostname;
    NSArray * _identityFiles;
    NSNumber * _port;
    NSString * _user;
}

@property (nonatomic, retain) NSArray *hostPatterns;
@property (nonatomic, retain) NSString *hostname;
@property (nonatomic, retain) NSArray *identityFiles;
@property (nonatomic, retain) NSNumber *port;
@property (nonatomic, retain) NSString *user;

- (void).cxx_destruct;
- (id)arrayByRemovingDuplicateElementsFromArray:(id)arg1;
- (id)hostPatterns;
- (id)hostname;
- (id)identityFiles;
- (id)init;
- (void)mergeFrom:(id)arg1;
- (id)mergedArray:(id)arg1 withArray:(id)arg2;
- (id)port;
- (void)setHostPatterns:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setIdentityFiles:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setUser:(id)arg1;
- (id)user;

@end
