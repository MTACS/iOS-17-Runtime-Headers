
@interface REMAuxiliaryChangeInfoType : NSObject <REMAuxiliaryChangeInfoObject> {
    NSDictionary * _storage;
    REMObjectID * remObjectID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) REMObjectID *remObjectID;
@property (nonatomic, retain) NSDictionary *storage;
@property (readonly) Class superclass;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;

- (void).cxx_destruct;
- (id)initWithREMObjectID:(id)arg1;
- (id)remObjectID;
- (void)setRemObjectID:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storage;
- (id)valueForUndefinedKey:(id)arg1;

@end
