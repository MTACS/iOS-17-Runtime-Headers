
@interface SIOutputData : NSObject <SIData>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)ensureDirectoryExist:(id)arg1;
+ (id)initWithConfig:(id)arg1;

- (bool)copyDataTo:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (bool)saveToDisk:(id)arg1 identifier:(id)arg2;

@end
