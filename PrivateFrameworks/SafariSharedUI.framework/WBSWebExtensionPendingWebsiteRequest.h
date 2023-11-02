
@interface WBSWebExtensionPendingWebsiteRequest : NSObject {
    NSString * _apiName;
    id /* block */  _completionHandler;
    NSDate * _expirationDate;
    NSSet * _urls;
}

@property (nonatomic, copy) NSString *apiName;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSSet *urls;

- (void).cxx_destruct;
- (id)apiName;
- (id /* block */)completionHandler;
- (id)expirationDate;
- (void)setApiName:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
