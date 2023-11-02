
@interface SAVCSContentShelfUpdateInfo : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pageNumber;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetShelfViewId;
@property (nonatomic, copy) NSString *targetViewId;
@property (nonatomic, copy) NSURL *url;

+ (id)contentShelfUpdateInfo;
+ (id)contentShelfUpdateInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)pageNumber;
- (void)setPageNumber:(long long)arg1;
- (void)setTargetShelfViewId:(id)arg1;
- (void)setTargetViewId:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)targetShelfViewId;
- (id)targetViewId;
- (id)url;

@end
