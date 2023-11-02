
@interface KVSkitEmptyAccess : NSObject <KVSkitReadAccess>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)indexLocale;
- (id)matchSpans:(id)arg1 error:(id*)arg2;
- (void)prewarm;

@end
