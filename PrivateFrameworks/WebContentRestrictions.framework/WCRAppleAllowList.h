
@interface WCRAppleAllowList : NSObject {
    NSSet * _allowList;
    NSString * _localPath;
}

@property (retain) NSSet *allowList;
@property (nonatomic, readonly) NSString *localPath;

- (void).cxx_destruct;
- (id)allowList;
- (bool)contains:(id)arg1;
- (id)initFromFile:(id)arg1;
- (id)localPath;
- (void)setAllowList:(id)arg1;

@end
