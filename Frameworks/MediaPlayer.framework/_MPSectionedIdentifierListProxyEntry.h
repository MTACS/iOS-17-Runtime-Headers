
@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult> {
    long long  _entryType;
}

@property (nonatomic, readonly) long long branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)endEntry;
+ (id)startEntry;

- (long long)branchDepth;
- (id)description;
- (long long)entryType;
- (id)itemResult;
- (id)trackingEntryResult;

@end
