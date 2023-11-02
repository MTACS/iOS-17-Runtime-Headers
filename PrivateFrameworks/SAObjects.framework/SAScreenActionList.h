
@interface SAScreenActionList : SAAbstractItemList

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *mainEntitySemanticData;
@property (nonatomic, copy) NSURL *viewId;

+ (id)list;
+ (id)listWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mainEntitySemanticData;
- (void)setAppId:(id)arg1;
- (void)setMainEntitySemanticData:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)viewId;

@end
