
@interface WFCoreDataChangeNotification : NSObject {
    NSSet * _deleted;
    NSSet * _inserted;
    bool  _invalidatedAllObjects;
    int  _processIdentifier;
    NSSet * _updated;
}

@property (nonatomic, readonly) NSSet *deleted;
@property (nonatomic, readonly) NSSet *inserted;
@property (nonatomic, readonly) bool invalidatedAllObjects;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSSet *updated;

- (void).cxx_destruct;
- (bool)appliesToResultState:(id)arg1;
- (id)debugDescription;
- (id)deleted;
- (id)deletedDescriptors;
- (id)dictionaryRepresentation;
- (bool)hasChanges;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithInvalidatedAllObjects:(bool)arg1 updated:(id)arg2 inserted:(id)arg3 deleted:(id)arg4 processIdentifier:(int)arg5;
- (id)inserted;
- (id)insertedDescriptors;
- (bool)invalidatedAllObjects;
- (id)notificationByMergingChangesFromNotification:(id)arg1;
- (bool)originatedInCurrentProcess;
- (int)processIdentifier;
- (id)updated;
- (id)updatedDescriptors;

@end
