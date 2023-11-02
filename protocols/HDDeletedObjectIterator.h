
@protocol HDDeletedObjectIterator <HKIterator>

@required

- (HKDeletedObject *)deletedObject;
- (long long)objectID;

@end
