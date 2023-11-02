
@protocol TSPComponentWriterDelegate <NSObject>

@required

- (void)componentWriter:(void *)arg1 canSkipArchivingStronglyReferencedObject:(void *)arg2 fromComponentRootObject:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: TSPComponentWriter *, TSPObject *, TSPObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (TSPComponent *)componentWriter:(TSPComponentWriter *)arg1 wantsComponentOfObject:(TSPObject *)arg2 componentReadVersion:(unsigned long long*)arg3;
- (TSPObject *)componentWriter:(TSPComponentWriter *)arg1 wantsExplicitComponentRootObjectForObject:(TSPObject *)arg2 archiverOrNil:(TSPArchiver *)arg3 claimingComponent:(TSPComponent *)arg4 hasArchiverAccessLock:(bool)arg5;
- (NSArray *)componentWriterWantsDelayedObjects:(TSPComponentWriter *)arg1;
- (unsigned long long)objectTargetTypeForComponentWriter:(TSPComponentWriter *)arg1;

@optional

- (bool)componentWriter:(TSPComponentWriter *)arg1 externalPackageDidWriteObject:(TSPObject *)arg2 claimingComponent:(id*)arg3 componentReadVersion:(unsigned long long*)arg4;
- (NSString *)componentWriter:(TSPComponentWriter *)arg1 locatorForClaimingComponent:(TSPComponent *)arg2;
- (bool)componentWriter:(TSPComponentWriter *)arg1 object:(TSPObject *)arg2 belongsToCopiedComponent:(TSPComponent *)arg3;
- (bool)componentWriter:(TSPComponentWriter *)arg1 shouldDelayWritingObject:(TSPObject *)arg2;
- (void)componentWriterNeedsDocumentRecovery:(TSPComponentWriter *)arg1;

@end
