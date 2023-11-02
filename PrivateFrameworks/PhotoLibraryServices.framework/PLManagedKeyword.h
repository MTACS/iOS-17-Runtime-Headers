
@interface PLManagedKeyword : PLManagedObject

@property (nonatomic, retain) NSSet *assetAttributes;
@property (nonatomic, retain) NSString *shortcut;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uuid;

+ (id)entityName;
+ (id)keywordForTitle:(id)arg1 context:(id)arg2;
+ (id)keywordForUuid:(id)arg1 context:(id)arg2;

- (void)awakeFromInsert;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;

@end
