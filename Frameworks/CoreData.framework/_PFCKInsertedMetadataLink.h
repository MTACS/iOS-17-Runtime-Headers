
@interface _PFCKInsertedMetadataLink : NSObject {
    NSManagedObject * _insertedObject;
    NSCKRecordMetadata * _recordMetadata;
}

- (void)dealloc;
- (id)description;

@end
