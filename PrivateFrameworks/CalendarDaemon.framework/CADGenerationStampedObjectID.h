
@interface CADGenerationStampedObjectID : CADObjectID {
    int  _restoreGeneration;
}

@property (nonatomic, readonly) int restoreGeneration;

- (Class)classForCoder;
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2 databaseID:(int)arg3 generation:(int)arg4;
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2 generation:(int)arg3;
- (bool)isEqual:(id)arg1;
- (int)restoreGeneration;

@end
