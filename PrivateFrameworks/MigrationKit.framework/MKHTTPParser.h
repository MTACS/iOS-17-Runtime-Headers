
@interface MKHTTPParser : NSObject

- (id)chunk:(id)arg1 offset:(unsigned long long*)arg2 done:(bool*)arg3;
- (id)parse:(id)arg1 hostname:(id)arg2;
- (id)parts:(id)arg1 boundary:(id)arg2 container:(id)arg3;

@end
