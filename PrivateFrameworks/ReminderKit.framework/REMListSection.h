
@interface REMListSection : REMBaseSection {
    REMList * _list;
}

@property (nonatomic, readonly) NSString *canonicalName;
@property (nonatomic, readonly) REMList *list;
@property (nonatomic, retain) REMObjectID *listID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStore:(id)arg1 list:(id)arg2 storage:(id)arg3;
- (id)list;

@end
