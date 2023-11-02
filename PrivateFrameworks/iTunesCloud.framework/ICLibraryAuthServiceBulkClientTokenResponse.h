
@interface ICLibraryAuthServiceBulkClientTokenResponse : NSObject <NSCopying> {
    NSMutableDictionary * _parsedTokenResults;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSString *serverInstance;
@property (nonatomic, readonly, copy) NSDictionary *tokenResults;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)serverInstance;
- (id)tokenResultForAccountDSID:(id)arg1;
- (id)tokenResults;

@end
