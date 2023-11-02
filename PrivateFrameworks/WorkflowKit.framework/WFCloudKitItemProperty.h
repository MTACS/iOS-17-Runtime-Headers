
@interface WFCloudKitItemProperty : NSObject {
    id  _constantValue;
    bool  _encrypted;
    WFFileType * _fileType;
    bool  _hasConstantValue;
    bool  _ignoredByDefault;
    Class  _itemClass;
    NSString * _name;
    NSValue * _nilValue;
    unsigned long long  _type;
}

@property (nonatomic, readonly) id constantValue;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (nonatomic, readonly) WFFileType *fileType;
@property (nonatomic, readonly) bool hasConstantValue;
@property (getter=isIgnoredByDefault, nonatomic, readonly) bool ignoredByDefault;
@property (nonatomic, readonly) Class itemClass;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSValue *nilValue;
@property (nonatomic, readonly) unsigned long long type;

+ (id)assetPropertyWithName:(id)arg1;
+ (id)assetPropertyWithName:(id)arg1 fileType:(id)arg2;
+ (id)assetPropertyWithName:(id)arg1 fileType:(id)arg2 ignoredByDefault:(bool)arg3 encrypted:(bool)arg4;
+ (id)itemPropertyWithName:(id)arg1 itemClass:(Class)arg2;
+ (id)itemReferencePropertyWithName:(id)arg1 itemClass:(Class)arg2;
+ (id)objectPropertyWithName:(id)arg1;
+ (id)objectPropertyWithName:(id)arg1 constantValue:(id)arg2;
+ (id)objectPropertyWithName:(id)arg1 constantValue:(id)arg2 encrypted:(bool)arg3;
+ (id)objectPropertyWithName:(id)arg1 ignoredByDefault:(bool)arg2 encrypted:(bool)arg3;
+ (id)scalarPropertyWithName:(id)arg1 constantValue:(id)arg2;
+ (id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2;
+ (id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2 ignoredByDefault:(bool)arg3 encrypted:(bool)arg4;

- (void).cxx_destruct;
- (id)constantValue;
- (id)fileType;
- (bool)hasConstantValue;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 itemClass:(Class)arg3 ignoredByDefault:(bool)arg4 nilValue:(id)arg5 hasConstantValue:(bool)arg6 constantValue:(id)arg7 fileType:(id)arg8 encrypted:(bool)arg9;
- (bool)isEncrypted;
- (bool)isIgnoredByDefault;
- (Class)itemClass;
- (id)name;
- (id)nilValue;
- (unsigned long long)type;

@end
